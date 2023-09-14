//Multiplication table by for loop

#include <stdio.h>
void main()
{
    int numb , i;

    printf("Enter Multiplication table of given number = ");
    scanf("%d", &numb);
    
    for(i = 1; i <=10; i++)
    {
        printf("%d * %d  = %d\n", numb, i, numb * i);
    }
}