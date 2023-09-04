#include<stdio.h>
void main()
{
    int row=1,column;

    while(row<=5)
    {
        column=1;
        while(column<=row)
        {
            printf("%d",row);
            column++;
        }
        printf("\n");
        row++;
        
    }


}