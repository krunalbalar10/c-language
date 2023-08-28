// write a programe to findout smallest number out of given 3 number.

#include<stdio.h>
void main()
{
    int number1 = 0, number2 = 0, number3 = 0;
    printf("Number 1 is ");
    scanf("%d",&number1);
    printf("Number 2 is ");
    scanf("%d", &number2);
    printf("Number 3 is ");
    scanf("%d",&number3);

    if (number1<number2 && number1<number3)
    {
        printf("Number 1 is smallest");
    }
    else if (number2<number1 && number2<number3)
    {
        printf("Number 2 is smallest");
    }
    else if(number3<number2 && number3<number1)
    {
        printf("Number 3 is smallest");
    } 
    else
    {
        printf("All are same");
    }
}