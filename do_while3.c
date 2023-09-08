// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000

#include <stdio.h>
void main()
{
    int numb = 1, count = 1;

    do
    {
        printf("%d ,", numb);
        count = count + 3;
        numb = numb + count;
    } while(numb <= 3000);
}