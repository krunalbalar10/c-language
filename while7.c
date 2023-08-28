// write a program to get two value from user and print range .
#include<stdio.h>
void main()
{
    int range1, range2;
    printf("Enter value of Range 1 : ");
    scanf("%d",&range1);
    printf("Enter value of Range 2 : ");
    scanf("%d",&range2);

    while(range1<range2)
    {
        
        range1 = range1 + 1;
        printf("%d ,",range1);
    }
}