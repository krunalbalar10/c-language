#include<stdio.h>
void main()
{
    int num[2][2];

    // num[0][0] = 10;
    // num[0][1] = 20;
    // num[1][0] = 30;
    // num[1][1] = 40;

    // printf("Enter number 1 is %d \n",num[0][0]);
    // printf("Enter number 2 is %d \n",num[0][1]);
    // printf("Enter number 3 is %d \n",num[1][0]);
    // printf("Enter number 4 is %d \n",num[1][1]);

    printf("Enter number 1 = ");
    scanf("%d",&num[0][0]);    
    
    printf("Enter number 2 = ");
    scanf("%d",&num[0][1]);

    printf("Enter number 3 = ");
    scanf("%d",&num[1][0]);

    printf("Enter number 4 = ");
    scanf("%d",&num[1][1]);

    printf("Number 1 is %d\n",num[0][0]);
    printf("Number 2 is %d\n",num[0][1]);
    printf("Number 3 is %d\n",num[1][0]);
    printf("Number 4 is %d\n",num[1][1]);

}