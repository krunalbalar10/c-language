//  Implement a program to check if a number is positive, negative, or zero.
#include<stdio.h>
void main()
{
  int numb , ans;

  printf("Enter Number : ");
  scanf("%d",&numb);

  printf("Given Number is = %d\n\n",numb);

  if(numb>0)
  {
    printf("It is Positive Number");
  }

  else if(numb<0)
  {
    printf("It is Negative Number");
  }
  else
  {
    printf("It is Zero");
  }
}