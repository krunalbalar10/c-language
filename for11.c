//      * 
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <stdio.h>
void main()
{
    int col1, col2, row , j , i , k;
    i = 1;
    
    printf("Enter value of k : ");
    scanf("%d",&k);
    printf("Enter value of j : ");
    scanf("%d",&j);

    for (row = 1; row <= k; row++)
    {
        for (col1 = 1; col1 <= j; col1++)
        {
            printf(" ");
        }

        for (col2 = 1; col2 <= i; col2++)
        {
            printf("* ");
        }
        printf("\n");
        j--;
        i++;
    }
}