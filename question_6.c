//6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter year to check leap year or not:\n");
    scanf("%d",&year);
    switch(year%100==0)
    {
      case 1:
            switch(year%400==0)
            {
              case 1:
               printf("%d is Leap year",year);
               break;
              case 0:
               printf("%d is not Leap year",year);
               break;
            }
            break;
      case 0:
           switch(year%4==0)
           {
             case 1: 
              printf("%d is leap year",year);
              break;
            case 0:
              printf("%d is not leap year",year);
              break;         
           }
           break;
      default: printf("Invalid input");  
    }
    getch();
    return 0;
}

