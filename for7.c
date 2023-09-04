//      * 
//     * *
//    * * *
//   * * * *
//  * * * * *

#include <stdio.h>                              
void main()
{
    int u, a, r , L1 =5 , L2=1;

    for (r = 1; r <= 5; r++)
    {
        for (u = 1; u <= L1; u++)
        {
            printf(" ");
        }
        L1--;

        for (a = 1; a <= L2; a++)
        {
            printf("* ");
        }
        L2++;

        printf("\n");
    }
}