#include<stdio.h>
void main()
{
    int numb[5] , i;

    for (i = 0; i <=4; i++)
    {
        printf("Enter number %d =",i+1);
        scanf("%d",&numb[i]);
    }

    for(i = 0; i <=4; i++)
    {
        printf("\nNumber %d : %d\n",i+1,numb[i]);
    }
}