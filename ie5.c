#include<stdio.h>
void main()
{
    int number, answer;
    printf("Enter year is : ");
    scanf("%d",&number);

    answer = number % 1000;

    if(answer == 0)
    {
        printf("millineum year \n\n");
    }
    else
    {
        printf("It is not millineum year\n\n");
    }
}