// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
void main()
{
    int j,i=1,k;
    k=1;
    
    while(i<=5)
    {
       j=5;
       while(i<=j)
       {
          printf("*");
          j--;
       }
       printf("\n");
       i++;
       k++;

    }
    
}