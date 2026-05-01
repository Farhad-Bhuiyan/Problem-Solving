#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 11
#define MAX_OVERS 3


struct Player
{
    char name[50];
    int runs;
    int balls;
    int fours;
    int sixes;
    int isOut;
};

struct Team
{
    char name[50];
    struct Player players[MAX_PLAYERS];
    int totalRuns;
    int wickets;
    int ballsBowled;
};


struct BattingOrder
{
    int playerIndex;
    struct BattingOrder* next;
};

struct BattingOrder* front = NULL;
struct BattingOrder* rear = NULL;

void enqueue(int index)
{
    struct BattingOrder* newNode = (struct BattingOrder*)malloc(sizeof(struct BattingOrder));
    newNode->playerIndex = index;
    newNode->next = NULL;
    if (rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dequeue()
{
    if (front == NULL)
        return -1;
    int idx = front->playerIndex;
    struct BattingOrder* temp = front;
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
    return idx;
}

void resetQueue()
{
    while (dequeue() != -1);
}

void initializeTeam(struct Team* team)
{
    team->totalRuns = 0;
    team->wickets = 0;
    team->ballsBowled = 0;
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        team->players[i].runs = 0;
        team->players[i].balls = 0;
        team->players[i].fours = 0;
        team->players[i].sixes = 0;
        team->players[i].isOut = 0;
    }
}


void playInnings(struct Team* team, int target, int isChasing)
{
    int striker = dequeue();
    int nonStriker = dequeue();

    for (int over = 1; over <= MAX_OVERS; over++)
    {
        printf("\n--- Over %d ---\n", over);
        for (int ball = 1; ball <= 6; ball++)
        {
            if (team->wickets == 10) break;
            if (isChasing && team->totalRuns >= target) break;

            int run;
            printf("Ball %d.%d - Runs Scored (or -1 for wicket): ", over, ball);
            scanf("%d", &run);

            if (run == -1)
            {
                printf("Wicket! %s is out.\n", team->players[striker].name);
                team->players[striker].isOut = 1;
                team->wickets++;
                if (team->wickets == 10) break;
                striker = dequeue();
            }
            else
            {
                team->players[striker].runs += run;
                printf("%s Scored %d run\n",team->players[striker].name,run);
                team->players[striker].balls++;
                team->totalRuns += run;

                if (run % 2 == 1)
                {
                    int temp = striker;
                    striker = nonStriker;
                    nonStriker = temp;
                }
            }

            team->ballsBowled++;

            // Check if target reached
            if (isChasing && team->totalRuns >= target)
            {
                printf("Target reached!\n");
                break;
            }
        }


        int temp = striker;
        striker = nonStriker;
        nonStriker = temp;

        if (isChasing && team->totalRuns >= target) break;
    }
}


void printScorecard(struct Team* team)
{
    printf("Team: %s\nTotal Runs: %d/%d in %d.%d overs\n\n",
           team->name, team->totalRuns, team->wickets, team->ballsBowled / 6, team->ballsBowled % 6);

    printf("Scorecard:\n");
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        printf("%s - %d (%d balls)%s\n",
               team->players[i].name,
               team->players[i].runs,
               team->players[i].balls,
               team->players[i].isOut ? "" : " *");
    }
}


int main()
{
    struct Team team1, team2;


    strcpy(team1.name, "GUB XI");
    initializeTeam(&team1);

    printf("Enter 11 player names for %s:\n", team1.name);
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        printf("Player %d: ", i + 1);
        scanf(" %[^\n]", team1.players[i].name);
        enqueue(i);
    }

    printf("\n=== %s Batting ===\n", team1.name);
    playInnings(&team1, 0, 0);


    int target = team1.totalRuns + 1;


    printf("\n========== FIRST INNINGS SUMMARY ==========\n");
    printScorecard(&team1);

    resetQueue();

    strcpy(team2.name, "Opponent XI");
    initializeTeam(&team2);

    printf("\nEnter 11 player names for %s:\n", team2.name);
    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        printf("Player %d: ", i + 1);
        scanf(" %[^\n]", team2.players[i].name);
        enqueue(i);
    }

    printf("\n=== %s Batting (Target: %d) ===\n", team2.name, target);
    playInnings(&team2, target, 1);


    printf("\n========== SECOND INNINGS SUMMARY ==========\n");
    printScorecard(&team2);


    printf("\n========== MATCH RESULT ==========\n");
    if (team2.totalRuns >= target)
    {
        printf("%s won by %d wicket(s)!\n", team2.name, 10 - team2.wickets);
    }
    else
    {
        printf("%s won by %d runs!\n", team1.name, target - team2.totalRuns - 1);
    }

    return 0;
}
