// 1,3,5,7,.............999.
#include<stdio.h>
void main()
{
    int numb = 1;
    
    while(numb<=999)
    {
        printf("%d ,",numb);
        numb = numb + 2;
    }
}