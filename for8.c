//  * * * * * 
//   * * * *
//    * * *
//     * *
//      *

#include <stdio.h>
void main()
{
    int row1, row2, row3 , c1 = 1 , c2 = 5;

    for (row3 = 1; row3 <= 5; row3++)
    {
        for (row1 = 1; row1 <= c1; row1++)
        {
            printf(" ");
        }
        c1++;

        for (row2 = 1; row2 <= c2; row2++)
        {
            printf("* ");
        }
        c2--;
        printf("\n");
        
    }
}