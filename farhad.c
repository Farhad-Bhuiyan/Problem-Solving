#include <stdio.h>
void push(int a);
int pop();
int stack[20], top = -1;
int main()
{
    int node, edge, a, b, s, u, v;
    printf("Enter number of nodes:\n");
    scanf("%d", &node);
    int matrix[node][node];
    int visited[node];
    int i, j;
    for (i = 0; i < node; i++)
    {
        for (j = 0; j < node; j++)
        {
            matrix[i][j] = 0;
        }
    }
    printf("Enter number of edges:\n");
    scanf("%d", &edge);
    printf("Enter edges (0-based indexing):\n");
    for (i = 0; i < edge; i++)
    {
        scanf("%d%d", &a, &b);
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    printf("Enter starting node:\n");
    scanf("%d", &s);
    for (i = 0; i < node; i++)
    {
        visited[i] = 0;
    }
    printf("DFS Traversal Order:\n");
    push(s);
    visited[s] = 1;
    while (top != -1)
    {
        u = pop();
        printf("%d ", u);
        for (v = node - 1; v >= 0; v--)
        {
            if (matrix[u][v] == 1 && visited[v] == 0)
            {
                push(v);
                visited[v] = 1;
            }
        }
    }

    printf("\n");

    return 0;
}
void push(int a)
{
    stack[++top] = a;
}

int pop()
{
    return stack[top--];
}
