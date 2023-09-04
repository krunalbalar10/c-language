// *
// * *
// *  *
// *   *
// *    *
// * * * *
#include <stdio.h>
void main()
{
    int row, col , k = 1;

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= k; col++)
        {
            if (col == 1 || row == 5 || col == k )
            {
                printf("* ");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
        k++;
    }
}