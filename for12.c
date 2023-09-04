//  * * * * * value given by user
//   * * * *
//    * * *
//     * *
//      *
#include <stdio.h>
void main()
{
    int col1, col2, row , j , k , i;
    j = 1;
    k = 5;
    printf("Enter value of k : ");
    scanf("%d",&k);
    printf("Enter value of i : ");
    scanf("%d",&i);

    for (row = 1; row <= i; row++)
    {
        for (col1 = 1; col1 <= j; col1++)
        {
            printf(" ");
        }

        for (col2 = 1; col2 <= k; col2++)
        {
            printf("* ");
        }
        printf("\n");
        j++;
        k--;
    }
}