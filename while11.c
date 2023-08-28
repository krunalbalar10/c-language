// 1 ,8 ,27 ,64 ,125 ...1000000
#include<stdio.h>
void main()
{
    int numb = 0, queb;

    while(queb<1000000)
    {
        numb = numb + 1;
        queb = numb*numb*numb;
        printf("%d ,", queb);
    }
}