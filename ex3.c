#include <stdio.h>
int binary_search(char arr[], int low, int high, char element)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] > element)
    {
        return binary_search(arr, low, mid - 1, element);
    }
    else
    {
        return binary_search(arr, mid + 1, high, element);
    }
}
int main()
{
    char arr[100];
    char element;
    printf("Enter the string: ");
    gets(arr);


    printf("Enter the target character: ");
    scanf("%c", &element);
    int i=0;

    while(arr[i]!='\0')
    {
        i++;
    }
    int result = binary_search(arr, 0, i, element);

    if (result != -1)
    {
        printf("Element %c found at index %d\n", element, result);
    }
    else
    {
        printf("Element %c not found in array\n", element);
    }

    return 0;
}
