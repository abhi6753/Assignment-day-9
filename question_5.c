/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");   */
#include<stdio.h>
#include<conio.h>
int main()
{
    short var;
    printf("Enter one number b/w 1 to 3:\n");
    scanf("%hi",&var);
    switch(var)
    {
        case 1: 
            printf("good\n");
            break;
        case 2: 
             printf("better\n");
             break;
        case 3:
             printf("best\n");
             break;
        default:
             printf("Invalid input\n");
             break;   
    }
    getch();
    return 0;
}