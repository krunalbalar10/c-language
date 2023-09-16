#include<stdio.h>

struct number
{
    int x;
    float y;
};
void main()
{
    struct number n1 , n2;

    printf("Enter value of number 1 of x : ");
    scanf("%d",&n1.x);

    printf("Enter value of number 1 of y : ");
    scanf("%d",&n1.y);

    printf("Enter value of number 2 of x : ");
    scanf("%d",&n2.x);

    printf("Enter value of number 2 of y : ");
    scanf("%d",&n2.y);

    printf("Number 1 of x : %d/n",n1.x);
    printf("Number 1 of y : %d/n",n1.x);
    printf("Number 1 of x : %d/n",n2.x);
    printf("Number 1 of y : %d/n",n2.x);
}