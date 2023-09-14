// 3) without arguments with return value function

#include<stdio.h>
float getpi()
{
    float pi ;

    pi = 3.14;

    return pi;
}
void main()
{
    int h , r;
    float area , pi;
    pi = getpi();

    printf("Enter value of radius : ");
    scanf("%d",&r);

    printf("Enter value of height : ");
    scanf("%d",&h);

    printf("Enter value of pi : %.2f\n",pi);

    area = (2 * pi * r * h) + (2 * pi * r * r);
    printf("Area of cylinder = %.2f",area);

}