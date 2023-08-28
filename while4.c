#include<stdio.h>
void main()
{
   int numb , count=0;
   printf("Enter value of number : ");
   scanf("%d",&numb);

   while(count<numb)
   {
      count = count + 1;
      printf("%d\n",count);
   }
}