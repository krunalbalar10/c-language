#include <stdio.h>
float printarea(int r, int h, float pi)
{
    float area;
    area = (2 * pi * r * h) + (2 * pi * r * r);
    printf("Area of cylinder = %.2f", area);
}

float getpi()
{
    float pi;

    pi = 3.14;

    return pi;
}

void main()
{
    int h[5], r[5], i;
    float area[5], pi;
    pi = getpi();

    for (i = 0; i <= 4; i++)
    {
        printf("Enter value of radius : ");
        scanf("%d", &r[i]);

        printf("Enter value of height : ");
        scanf("%d", &h[i]);

        printf("Enter value of pi : %.2f\n", pi);
    }

    printarea(r[0], h[0], pi);
    printarea(r[1], h[1], pi);
    printarea(r[2], h[2], pi);
    printarea(r[3], h[3], pi);
    printarea(r[4], h[4], pi);
    
}