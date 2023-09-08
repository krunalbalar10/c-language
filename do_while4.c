// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000

#include <stdio.h>
void main()
{
    int numb = 0, count = 0;

    do
    {
        printf("%d ,", numb);
        count = count + 1;
        numb = numb + count;
    } while (numb <= 1000);
}