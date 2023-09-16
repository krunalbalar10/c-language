#include<stdio.h>

struct number
{
     int x;
     float y;

}n[2];

void main()
{

    printf("Enter value of number 1 of x : ");
    scanf("%d",&n[0].x);

    printf("Enter va;ue of number 1 of y : ");
    scanf("%f",&n[0].y);

    printf("Enter value of number 2 of x : ");
    scanf("%d",&n[1].x);

    printf("Enter value of number 2 of y : ");
    scanf("%f",&n[1].y);

    printf("Number 1 of x : %d\n",n[0].x);
    printf("Number 1 of y : %f\n",n[0].y);
    printf("Number 1 of x : %d\n",n[1].x);
    printf("Number 1 of y : %f\n",n[1].y);
}

