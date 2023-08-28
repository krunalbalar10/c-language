//write a program of given number to run calc funtion.
//add, sub, mult, div, modu.

#include<stdio.h>
void main()
{
    int number1 , number2 , option , answer;

    printf("enter value of numbe 1 is : ");
    scanf("%d", &number1);
    printf("enter value of number 2 is : ");
    scanf("%d", &number2);

    printf("\n Number 1 is for addition \n");
    printf("\n NUmber 2 is for substraction \n");
    printf("\n Number 3 is for multiplication  \n");
    printf("\n Number 4 is for divsion  \n");
    printf("\n Number 5 is  for modulus \n\n");
    scanf("%d", &option);

    if (option == 1)
    {
        answer = number1 + number2;
        printf("The value of addition is %d",answer);
    }
    else if (option == 2)
    {
        answer = number1 - number2;
        printf("The value of substraction %d ",answer);
    }
    else if(option == 3)
    {
        answer = number1 * number2;
        printf("The value of multiplication is %d", answer);
    }
    else if(option == 4)
    {
        answer = number1 / number2;
        printf("The value of division is %d", answer);
    }
    else if (option == 5)
    {
        answer = number1 % number2;
        printf("The value of modulus is %d ", answer);
    }
    else
    {
        printf("Option number is not valid.");
    }

}