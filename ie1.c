#include<stdio.h>
void main()
{
    int number;
    printf("Enter number value is : ");
    scanf("%d", &number);

    printf("number is %d\n\n", number);
    
    if(number>0)
    {
        printf("number is positive ");
    }
    else if(number=0)
    {
        printf("number is zero");
    }
    else
    {
        printf("number is negative");
    }

    printf("\n\n............end...........");

}
