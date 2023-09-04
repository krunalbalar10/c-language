#include<stdio.h>
void main()
{
    int j, i=1;

    while(i<=6)
    {
        j=1;
        while(j<=i)
       {
          printf("*");
          j++;
       }
        printf("\n");
        i++;
    }

    // j=1;
    // while(j<=5)
    // {
    //     printf("*");
    //     j++;
    // }
    // printf("\n");

    // j=1;
    // while(j<=5)
    // {
    //     printf("*");
    //     j++;
    // }
    // printf("\n");
}