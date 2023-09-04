// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
#include<stdio.h>
void main()
{
    int numb = 1, numb1 = 1;
    
    
    while(numb<=3000)
    {
        printf("%d ,",numb);
        numb1 = numb1 + 3;
        numb = numb + numb1;
    }

} 