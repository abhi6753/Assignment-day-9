//10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x,y;
    float Real_Part,Imaginary_Part;
    printf("Enter coefficients a, b and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("It is not quadratic equation\n");
        getch();
        return 0;
    }
    D=pow(b,2)-(4*a*c); // discriminant
    switch(D>0)
    {
        case 1:
            x = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
            y = (-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
            printf("root1 =  %.2lf and root2 = %.2lf\n",x,y);  // Real and distinct roots
            break;
        case 0:
             switch((int)D==0)
             {
                 case 1: 
                 x = -b/(2*a); // real and equal roots or zeros
                 printf("root1 = root2 = %.2lf\n",x);
                 break;
                 case 0: 
                 Real_Part = -b/(2*a);
                 Imaginary_Part = sqrt(-D) / (2 * a);
                 printf("root1 = %.2f + %.2fi\n",Real_Part,Imaginary_Part);
                 printf("root2 = %.2f - %.2fi",Real_Part,Imaginary_Part);
                 break;
             }
             break;
        default:
        printf("Invalid input\n");       
    }
    getch();
    return 0;
}