#include<stdio.h>
float printarea(int h , int b)
{
    float area;
    area = (h * b) / 2;
    return area;
}
void main()
{
    int h , b;
    float Area;
    
    printf("Enter value of height : ");
    scanf("%d",&h);

    printf("Enter value of base : ");
    scanf("%d",&b);

    printf("\nHeight : %d || Base : %d \n", h , b); 
    
    Area = printarea(h , b);
    printf("Area of triangle : %.2f",Area);
}