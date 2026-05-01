#include<stdio.h>
#include<ctype.h>
int main()
{
   char alphabet,punctuation;
   int digit;
   scanf("%d",&digit);
   scanf("%c",&alphabet);
   scanf("%c",&punctuation);

   switch (digit){
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    printf("digit\n");
    break;
   }
   switch(alphabet){
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    printf("alphabet\n");
    break;
    }
    switch(punctuation){
    case '+':
    case '-':
    case '*':
    case '/':
    case '=':
    case ')':
    case '(':
    case '&':
    case '^':
    case '%':
    case '$':
    case '#':
    case '@':
    case '!':
    case '~':
    printf("punctuation\n");
    break;
   }
   return 0;
}
