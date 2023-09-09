#include <stdio.h>
void main()
{
    int base[5], height[5], i,j;
    float area[5];

    for (i = 0; i <= 4; i++)
    {
        printf("\nEnter value of Triangle %d\n", i + 1);
        printf("Enter value of Base = ");
        scanf("%d", &base[i]);
        printf("Enter value of height = ");
        scanf("%d", &height[i]);
    }

    printf("\n\n");

    for(i=0;i<=4;i++)

    {

        area[i] = (base[i] * height[i]) / 2;
        printf("Area of Traingle %d= %f\n",i+1, area[i]);
        
    }
        

}