//      * 
//     * *
//    *   *
//   *     *
//  * * * * * 

#include <stdio.h>
void main()
{
    int row, col1, col2 , i = 5 , j = 1;

    for (row = 1; row <= 5; row++)
    {
        for (col1 = 1; col1 <= i; col1++)
        {
            printf(" ");
        }

        for (col2 = 1; col2 <= j; col2++)
        {
            if (col2 == 1 || row == 5 || col2 == j)
            {
                printf("%d ",col2);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        i--;
        j++;
    }
}