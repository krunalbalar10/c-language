// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>
void main()
{
    int row1, row2 , c1 = 1;

    for (row2 = 1; row2 <= 5; row2++)
    {
        for (row1 = 1; row1 <= c1; row1++)
        {
            printf("%d",c1);
        }
        c1++;
        printf("\n");
    }
}