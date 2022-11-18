//9. Program to Convert even number into its upper nearest odd number using Switch Statement.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter even number:\n");
    scanf("%d",&num);
    switch(num%2==0)
    {
        case 1: printf("Upper nearest odd number is %d\n",num+1);
        break;
        default:printf("Error! Please input even number");
    }
    getch();
    return 0;
}