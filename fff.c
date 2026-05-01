#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node* nextNode;
};

struct Node* CreateNode (int value)
{
    struct Node* nn = (struct Node*) malloc (sizeof(struct Node));
    nn->value = value;
    nn->nextNode = NULL;
    return nn;
}

void Insert (struct Node** head, int value)
{
    struct Node* nn = CreateNode (value);
    if (*head == NULL)
    {
        *head = nn;
        return;
    }

    nn->nextNode = *head;
    *head = nn;
}

void Find(struct Node* head,int element)
{
    if (head == NULL) return;
    int count=0;
    struct Node* nn = head;
    while (nn != NULL)
    {
        if(nn->value==element)
        {
            printf("%d is the element on %d position.\n",nn->value,count);
            return;
        }
        nn = nn->nextNode;
        count++;
    }
    printf("Not find\n");
    printf ("\n");
}

void size(struct Node* head)
{
    int count=0;
    if (head == NULL) return;
    struct Node* nn = head;
    while (nn != NULL)
    {
        nn = nn->nextNode;
        count++;
    }
    printf("The Size of the linked list is %d",count);
    printf ("\n");
}

void Traverse (struct Node* head)
{
    if (head == NULL) return;

    struct Node* nn = head;
    while (nn != NULL)
    {
        printf ("%d -> %d \n",nn, nn->value);
        nn = nn->nextNode;
    }
    printf ("\n");
}

int main ()
{
    struct Node* head = NULL;
    Insert (&head, 23);
    Insert (&head, 33);
    Insert (&head, 43);
    Insert (&head, 75);
    Insert (&head, 92);
    Insert (&head, 49);
    Find(head,43);
    size(head);
    Traverse(head);

    return 0;
}
