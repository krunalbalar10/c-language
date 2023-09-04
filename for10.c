// *   by user given
// **
// ***
// ****
// *****

#include <stdio.h>
void main()
{
    int col, row , temp = 1 , row1;

    printf("Enter value of row : ");
    scanf("%d", &row1);

    for (row = 1; row <= row1; row++)
    {
        for (col = 1; col <= temp; col++)
        {
            printf("*");
        }
        printf("\n");
        temp++;
    }
}