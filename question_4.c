/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit    */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float A(void);
float B(void);
float C(void);
int main()
{
    float a,b,c;
    char ch;
    while(1)
    {
        printf("\nEnter your choice:\n");
        printf("a. To Check isosceles triangle\n");
        printf("b. To Check right angled triangle\n");
        printf("c. To Check equilateral triangle\n");
        printf("d. Exit\n");
        scanf("%c",&ch);
        switch(ch)
        {
          
        case 'a':
            a=A();b=B();c=C();
            if(a==b || b==c || c==a)
              printf("Isosceles triangle\n");
            else
              printf("Not isosceles triangle\n");
            break;
        case 'b':
            a=A();b=B();c=C();
            if(a*a == b*b + c*c ||b*b == a*a+c*c ||c*c == a*a+b*b)
               printf("Right angled Traingle");
            else
               printf("Not Right angle Traingle");
            break;
        case 'c':
            a=A();b=B();c=C();
            if(a==b&&b==c)
               printf("Equilateral triangle");
            else
               printf("Not equilateral triangle");
            break;
        case 'd':
            exit(0);
            break;
        default:
            printf("Invalid input\n");
            break;
        }
        fflush(stdin);
        printf("\n");
    }  
    getch();
    return 0;
}
float A(void)
{
    float a;
    printf("Enter first side of triangle:\n");
    scanf("%f",&a);
    return a;
}
float B(void)
{
    float b;
    printf("Enter second side of triangle:\n");
    scanf("%f",&b);
    return b;
}
float C(void)
{
    float c;
    printf("Enter third side of triangle:\n");
    scanf("%f",&c);
    return c;
}
