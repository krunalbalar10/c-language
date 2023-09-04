// * * * * * 
// *     *
// *   *
// * *
// *
#include<stdio.h>
void  main()
{
    int row , col , k = 5;

    for(row = 1; row <= 5; row++)
    {
        for (col = 1; col <= k; col++)
        {
            if(col == 1 || col == k || row == 1)
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
    }
    
}