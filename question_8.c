//8. Program to convert a positive number into a negative number and negative\
number into a positive number using a switch statement.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    short x;
    printf("Enter number:\n");
    scanf("%d",&num);
    x = num>0; // If we pass value like this then we don't get warning: switch condition has boolean value [-Wswitch-bool]
    switch(x)
    {
        case 1: 
          printf("%d is Positive number",num);
        break; 
        case 0: 
               switch(num==0)
               {
                   case 1:
                     printf("%d is Neutral number",num);
                   break;
                   case 0:
                     printf("%d is Negative number",num);
                   break;
               }
        break;
        default:
        printf("Inavlid input");
    }
    getch();
    return 0;
}