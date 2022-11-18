/* 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit              */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // To use exit() & fflush() 
int main()
{
    int a,b;
    char ch;
    while(1)
    {
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");
        printf("Enter your choice:\n");
        fflush(stdin);
        scanf("%c",&ch);
        switch (ch)
        {   
            case 'a':
                printf("Enter two number:\n");
                scanf("%d%d",&a,&b);
                printf("Sum is %d\n\n",a+b);
                break;
            case 'b':
                printf("Enter two number:\n");
                scanf("%d%d",&a,&b);
                printf("Difference is %d\n\n",a-b);
                break;
            case 'c':
                printf("Enter two number:\n");
                scanf("%d%d",&a,&b);
                printf("Multiplication is %d\n\n",a*b);
                break;
            case 'd':
                printf("Enter two number:\n");
                scanf("%d%d",&a,&b);
                printf("Quotient is %d\n\n",a/b);
                break;
            case 'e':
                exit(0); // return to OS and 0 program terminate without no error non-zero means terminate with error       
            default:
                printf("Invalid Input\n\n");
        }
    }
    getch();
    return 0;
}