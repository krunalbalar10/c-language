// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300.

#include <stdio.h>
void main()
{
    int numb1, numb2;

    numb2 = 2;
    numb1 = 1;

    printf("%d ,", numb2);
    printf("%d ,", numb1);

    do
    {
        numb2 = numb1 + numb2;
        printf("%d ,", numb2);
        numb1 = numb2 + numb1;
        printf("%d ,", numb1);
    } while(numb1 < 199);
}