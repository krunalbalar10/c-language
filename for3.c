#include<stdio.h>
void main()
{
    int row , colum, temp=1;

    for(row=1; row<=5; row++)
    {
        for(colum=1; colum<=temp; colum++)
        {
            printf("%d",temp);

        }
        printf("\n");
        temp++;
    }
}