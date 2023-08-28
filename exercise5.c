#include<stdio.h>
void main()
{
    float pi,area, r, h;
     
    printf("enter value of pi =");
    scanf("%f",&pi);
    printf("enter value of radius =",r);
    scanf("%f",&r);
    printf("enter value of height =");
    scanf("%f",&h);

    printf("\n\nvalue of pi = %f\n\n",pi);
    printf("value of height = %f\n\n",h);
    printf("value of radius = %f\n\n",r);
    
    area=2*(pi*r*h)+2*(pi*r*r);
    printf("Area of cyclinder is %.2f",area);


    

}