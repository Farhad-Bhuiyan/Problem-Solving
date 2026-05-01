#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;
void push(int value)
{
    if (top >= SIZE)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
        stack[++top] = value;
}
int pop()
{
    if (top <= -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else

        return stack[top--];
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    else
    {
        printf("Stack: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
void removeElement(int value,int stack )
{
    int tempStack[SIZE];
    int tempTop = -1;
    if (stack[top]==123)

}

int main()
{
    push(17);
    push(5);
    push(123);
    push(25);
    push(12);
    push(83);
    printf("Before Removing: \n");
    display();

    return 0;
}
