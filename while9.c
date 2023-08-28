// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
#include<stdio.h>
void main()
{
    int numb = 0, numb1 = 0;
    
    while(numb<=1000)
    {
        printf("%d ,",numb);
        numb1 = numb1 + 1;
        numb = numb + numb1;
    }
        
}