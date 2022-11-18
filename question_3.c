//3. Write a program which takes the day number of a week and displays a\
unique greeting message for the day.
#include<stdio.h>
#include<conio.h>
int main()
{
    short day_num;
    printf("Enter day number:\n");
    scanf("%hi",&day_num);
    switch (day_num)
    {
    case 1:
        printf("Sunday is a Funday\n");
        break;
    case 2:
        printf("Monday is a boring day\n");
        break;
    case 3:
        printf("Tuesday is less boring day\n");
        break;
    case 4:
        printf("Wednesday is a productive day\n");
        break;
    case 5:
        printf("Thrusday is a working day\n");
        break;
    case 6:
        printf("Friday is excitement day\n");
        break;
    case 7:
        printf("Saturday is off day\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    getch();
    return 0;
}