#include<stdio.h>
void main()
{
   float area,width,length;
   printf("enter value of width =");
   scanf("%f",&width);
   printf("enter value of length =");
   scanf("%f",&length);

   printf("value of width is %f\n\n",width);
   printf("value of length is %f\n\n",length);
   
   area = width*length;
   printf("Area of ractangle is %f",area);
   
   

}