// Create a program to determine if a given year is a leap year or not.
#include<stdio.h>
void main()
{
   int numb, ans;

   printf("Given Year is ");
   scanf("%d",&numb);

   ans = numb % 4;

   if(ans==0)
   {
    printf("It is Leap Year.");
   }
   else
   {
    printf("It is not Leap year.");
   }
}