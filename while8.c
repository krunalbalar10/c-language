// 1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000
#include<stdio.h>
void main()
{
    int numb = 1, temp = 1;

    while(numb<=10000) 
    {
    printf("%d ,",numb);
    temp = temp + 4;
    numb = numb + temp; 
        
    }
}