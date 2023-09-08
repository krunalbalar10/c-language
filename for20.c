// 5 ! = 5x4x3x2x1 = 120

#include<stdio.h>
void main()
{
    int numb , fact = 1 , count;

    printf("Enter number : ");
    scanf("%d",&numb);

    for(count = numb; count >= 1; count--)
    {
         printf("%d ",count);
        fact = fact * count; 
    }
    printf("Factorial of %d! = %d",numb,fact);
}