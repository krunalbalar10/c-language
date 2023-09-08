//  10= 1+2+3+4+5+6+7+8+9+10 = 55

#include<stdio.h>
void main()
{
    int numb , count ,sum = 0;

    printf("Enter number : ");
    scanf("%d",&numb);

    for(count = 1; count <= numb; count++)
    {
        printf("%d + ",count);
        sum = sum + count;
    }
    printf(" = %d",sum);
}