//write a program to findout largest cyliender's volume from 3 cyliender dimensions using nested decision making statement 
#include<stdio.h>
void main()
{
    float area1, area2, r1, r2, h1, h2, r3, h3, pi;
    float v_c1, v_c2, v_c3;
    printf("Enter value of pi : ");
    scanf("%f", &pi);
    printf("radius of cylinder 1 : ");
    scanf("%f", &r1);
    printf("height of cylinder 1 : ");
    scanf("%f", &h1);
    printf("radius of cylinder 2 : ");
    scanf("%f", &r2);
    printf("height of cylinder 2 : ");
    scanf("%f", &h2);
    printf("radius of cylinder 3 : ");
    scanf("%f", &r3);
    printf("radius of cylinder 3 : ");
    scanf("%f", &h3);

    v_c1=pi*r1*r1*h1;
    v_c2=pi*r2*r3*h2;
    v_c3=pi*r3*r3*h3;

    printf("\nVolume of cylinder 1 = %.2f\n",v_c1);
    printf("Volume of cylinder 2 = %.2f\n",v_c2);
    printf("Volume of cylinder 3 = %.2f\n",v_c3);
    
    if(v_c1>v_c2 && v_c1>v_c3)
    {
        printf("Volume of cylinder 1 is largest");
    }
    else if(v_c2>v_c1 && v_c2>v_c3)
    {
        printf("Volume of cylinder 2 is largest");
    }
    else if (v_c3>v_c1 && v_c3>v_c2)
    {
        printf("Volume of cylinder 3 is largest");
    }
    else
    {
        printf("All cylinder's volume are same");
    }
}