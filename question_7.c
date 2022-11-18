/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.  */
#include<stdio.h>
#include<conio.h>
int main()
{
    float electricity_unit,amount,total_amount;
    printf("Enter total consumption of electricty:\n");
    scanf("%f",&electricity_unit);
    switch(electricity_unit<=50)
    {
       case 1:
             amount = electricity_unit*0.50;
             printf("Energy Charges = %.2f",amount);
             break;
       case 0:
             switch(electricity_unit<=100)
             {
                   case 1:
                        amount = 50*0.5+(electricity_unit-50)*0.75;
                         printf("Energy Charges = %.2f",amount); 
                        break;
                   case 0:
                        switch(electricity_unit<=250)
                        {
                            case 1:
                                  amount = (50*0.5)+(100*0.75)+((electricity_unit-150)*1.20);
                                   printf("Energy Charges = %.2f",amount);
                                  break;
                            case 0:
                                  amount = (50*0.5)+(100*0.75)+(100*1.20)+(electricity_unit-250)*1.50;
                                   printf("Energy Charges = %.2f",amount);
                                 break;
                        }
                        break;
             }
             break;
    }
    total_amount = amount+(amount*0.20);
    printf("\nTotal Amount = %.2f",total_amount); // with 20% charges
    getch();
    return 0;
}