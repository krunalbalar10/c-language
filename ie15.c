#include<stdio.h>
void main()
{
    int unit, unit1, unit2, unit3, unit4, unit5;
    float charge;
    printf("Enter value of unit : ");
    scanf("%d",&unit);
    
    printf("\nUnit = %d\n\n",unit);

    if(unit>=0 && unit<=100)
    {
        unit1 = unit*1;
        printf("value of unit : %d\n",unit1);
        charge = (unit1*105)/100;
        printf("\nValue after 5 percent Charge on total bill = %.2f\n",charge);
    }
    else if (unit>=101 && unit<=200)
    {
        unit2 = unit*2;
        printf("Value of unit : %d",unit2);
        charge = (unit2*105)/100;
        printf("\nValue after 5 percent Charge on total bill = %.2f\n",charge);
    }
    else if (unit>=201 && unit<=300)
    {
        unit3 = unit*3;
        printf("Value of unit : %d",unit3);
        charge = (unit3*105)/100;
        printf("\nValue after 5 percent Charge on total bill = %.2f\n",charge);
    }
    else if (unit>=301 && unit<=400)
    {
        unit4 = unit*4;
        printf("Value of unit : %d",unit4);
        charge = (unit4*105)/100;
        printf("\nValue after 5 percent Charge on total bill = %.2f\n",charge);
    }
    else if (unit>=401)
    {
        unit5 = unit*5;
        printf("Value of unit : %d",unit5);
        charge = (unit5*105)/100;
        printf("\nValue after 5 percent Charge on total bill = %.2f\n",charge);
    }
}