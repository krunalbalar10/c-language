// 5! =5x4x3x2x1 =     120


#include<stdio.h>
void main()
{
    int numb = 5, fact = numb , k = 1;

    while(k<5)
    {
        fact = fact * k;
        printf("%d",fact);
        k++;
    }
    
       
}