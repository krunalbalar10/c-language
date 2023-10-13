// Write a C program to check whether a number is even or odd.
#include <stdio.h>
void main()
{
    int numb1, numb;

    printf("Enter NUmber 1 : ");
    scanf("%d", &numb1);
    
    printf("Number 1 = %d\n", numb1); 

    numb = numb1 % 2;

    if(numb==0)
    {
        printf("It is even number.");
    }

    else
    {
        printf("It is odd number.");
    }

}