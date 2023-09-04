//  * * * * * 
//   *     *
//    *   *
//     * *
//      *

#include <stdio.h>
void main()
{
    int col1, col2, row , k = 5 , j = 1;

    for (row = 1; row <= 5; row++)
    {
        for (col1 = 1; col1 <= j; col1++)
        {
            printf(" ");
        }

        for (col2 = 1; col2 <= k; col2++)
        {
           if( col2 == 1 || row == 1 || col2 == k)
           {
            printf("* ");
           }

           else
           {
            printf("  ");
           }
        }
        printf("\n");
        k--;
        j++;
    }
}