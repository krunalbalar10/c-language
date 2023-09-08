#include<stdio.h>
void main()
{
    int number1, answer;
    printf("enter value of number is : ");
    scanf("%d", &number1);

    answer= number1 % 2;

    if(number1==0)
    {
        printf("It is zero\n\n");
    }
    else if(answer==0)
    {
        printf("It is even number\n\n");
    }
    else
    {
        printf("It is odd number\n\n");
        
    }

}