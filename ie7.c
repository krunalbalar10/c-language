#include<stdio.h>
void main()
{
    int height1, height2, base1, base2, area1, area2;
    printf("enter value of height 1 : ");
    scanf("%d",&height1);
    printf("enter value of base 1 : ");
    scanf("%d",&base1);
    printf("enter value of height 2 : ");
    scanf("%d",&height2);
    printf("enter value of base2 2 : ");
    scanf("%d",&base2);

    printf("\nheight1 is %d and base1 is %d\n",height1,base1);
    printf("\nheight2 is %d and base2 is %d\n",height2,base2);

    area1=(height1*base1)/2;
    printf("\nArea of triangle 1 = %d\n\n",area1);
    area2=(height2*base2)/2;
    printf("Area of triangle 2 = %d\n\n",area2);

    if (area1>area2)
    {
        printf("Area of Triangle 1 is bigger.");
    }
    else if (area2>area1)
    {
        printf("Area of Triangle 2 is bigger.");
    }
    else
    {
        printf("Both of Traingle area is same.");
    }

}