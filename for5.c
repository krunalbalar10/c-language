#include<stdio.h>
void main()
{
    int num =0, squre;

    for(num = 1; squre<10000; num++)
    {
        squre = num*num;
        printf("%d ,",squre);
    }
}