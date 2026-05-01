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

void Insert (struct Node** head, int value, int pos)
{
    struct Node* nn = CreateNode (value);

    if (*head == NULL || pos == 0)
    {
        nn->nextNode = *head;
        *head = nn;
        return;
    }

    struct Node* cn = *head;
    struct Node* pn = NULL;
    int i = 0;

    while (i < pos && cn != NULL)
    {
        pn = cn;
        cn = cn->nextNode;
        i++;
    }

    pn->nextNode = nn;
    nn->nextNode = cn;
}
void Delete (struct Node** head, int pos)
{
    if(*head==NULL)return;
    struct Node* cn=*head;
    struct Node* pn=NULL;
    if (pos == 0||cn->nextNode==NULL)
    {

        *head = (*head)->nextNode;
        free(cn);
        e33
        return;
    }

    int i=0;
    while(i<pos&&cn!=NULL)
    {
        pn=cn;
        cn=cn->nextNode;
        i++;
    }
    pn->nextNode=cn->nextNode;
    free(cn);
}

void Traverse (struct Node* head)
{
    if (head == NULL) return;

    struct Node* nn = head;
    while (nn != NULL)
    {
        printf ("%d ", nn->value);
        nn = nn->nextNode;
    }
    printf ("\n");
}

int main ()
{
    struct Node* head = NULL;
    Insert (&head, 23, 0);
    Insert (&head, 33, 4);
    Insert (&head, 43, 1);
    Traverse (head);
    Delete(&head,1);
    Traverse(head);
    Delete(&head,0);
    Traverse(head);
    Insert (&head, 56, 0);
    Traverse(head);
    return 0;
}
