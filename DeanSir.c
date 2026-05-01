#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct PropertySale
{
    int UID;
    char Address[20];
    int ZIP;
    int size;
    int Construction_Year;
    int price;
    struct PropertySale* nextNode;
};

struct PropertySale* CreateNode(int UID, char Address[],int ZIP,int size, int Constraction_year,int price)
{
    struct PropertySale* nn=(struct PropertySale*)malloc(sizeof(struct PropertySale));
    nn->UID = UID;
    strcpy(nn->Address,Address);
    nn->ZIP=ZIP;
    nn->size=size;
    nn->Construction_Year=Constraction_year;
    nn->price=price;
    nn->nextNode = NULL;
    return nn;
}
void Sales(struct PropertySale** head,int UID, char Address[],int ZIP,int size, int Constraction_year,int price)
{
    struct PropertySale* nn=CreateNode(UID,Address,ZIP,size,Constraction_year,price);
    if(*head==NULL)
    {
        *head=nn;
        return;
    }
    struct PropertySale* cn=*head;
    while(cn->nextNode!=NULL)
    {
        cn=cn->nextNode;
    }
    cn->nextNode=nn;
}
void Erase(struct PropertySale** head,int UID)
{
    if(*head==NULL)return;
    struct PropertySale* cn=*head;
    struct PropertySale* tn=NULL;
    if(cn->nextNode==NULL&&cn->UID==UID)
    {
        *head=cn->nextNode;
        free(cn);
        return;
    }
    else
    {
        while(cn!=NULL&&cn->UID!=UID)
        {
            tn=cn;
            cn=cn->nextNode;
        }
        tn->nextNode=cn->nextNode;
        free(cn);
    }
}
void Search(struct PropertySale* head,int UID)
{
    if(head==NULL)return;
    struct PropertySale* cn=head;
    while(cn!=NULL)
    {
        if(cn->UID==UID)
        {
            printf("Sale found.\n");
            printf("UID: %d\n",cn->UID);
            printf("Address: %s\n",cn->Address);
            printf("ZIP: %d\n",cn->ZIP);
            printf("Size: %d\n",cn->size);
            printf("Construction Year: %d\n",cn->Construction_Year);
            printf("Prize: %d\n",cn->price);
        }
        cn=cn->nextNode;
    }
}
void GetPrice(struct PropertySale* head,int UID)
{
    if(head==NULL)return;
    struct PropertySale* cn=head;
    while(cn!=NULL)
    {
        if(cn->UID==UID)
        {
            printf("The Price of %d UID is %d\n",UID,cn->price);
            return;
        }
        cn=cn->nextNode;
    }
}
void GetZIP(struct PropertySale* head,int UID)
{
    if(head==NULL)return;
    struct PropertySale* cn=head;
    while(cn!=NULL)
    {
        if(cn->UID==UID)
        {
            printf("The ZIP code of %d UID is %d\n",UID,cn->ZIP);
            return;
        }
        cn=cn->nextNode;
    }
}
void SalesCount(struct PropertySale* head)
{
    if(head==NULL)return;
    struct PropertySale* cn=head;
    int count=0;
    while(cn!=NULL)
    {
        count++;
        cn=cn->nextNode;
    }
    printf("Total Sales is %d\n",count);
    return;
}
void AveragePrice(struct PropertySale* head)
{
    if(head==NULL)return;
    int count=0,sum=0;
    struct PropertySale* cn=head;
    while(cn!=NULL)
    {
        sum+=cn->price;
        count++;
        cn=cn->nextNode;
    }
    printf("The AveragePrice is %d\n",sum/count);
    return;
}
void PrintDB(struct PropertySale* head)
{
    if(head==NULL)return;
    struct PropertySale* cn=head;
    while(cn!=NULL)
    {
        printf("Sale found.\n");
        printf("UID: %d\n",cn->UID);
        printf("Address: %s\n",cn->Address);
        printf("ZIP: %d\n",cn->ZIP);
        printf("Size: %d\n",cn->size);
        printf("Construction Year: %d\n",cn->Construction_Year);
        printf("Prize: %d\n",cn->price);
        printf("\n");
        cn=cn->nextNode;
    }
}
int main()
{
    struct PropertySale* head= NULL;
    Sales(&head,101, "Dhaka", 12345, 1200, 2020, 250000);
    Sales(&head,102, "Sylet", 67890, 1500, 2018, 300000);
    Sales(&head,103, "Rajsahi", 54321, 1800, 2015, 350000);
    Sales(&head,104, "Green University", 14550, 1900, 2024, 450000);
    Sales(&head,105, "Kuril", 54321, 1300, 2025, 550000);

    PrintDB(head);
    printf("The Updated Part:\n");
    Erase(&head,105);
    PrintDB(head);
    Search(head,101);
    GetZIP(head,102);
    GetPrice(head,102);
    SalesCount(head);
    AveragePrice(head);
    return 0;
}
