#include <stdio.h>
float printarea(float r, float h, float pi)
{
    float area;

    area = (2 * pi * r * h) + (2 * pi * r * r);

    return area;
}
void main()
{
    
    float pi = 3.14 , ans,r, h;

    printf("Enter value of radius : ");
    scanf("%f", &r);

    printf("Enter value of height : ");
    scanf("%f", &h);

    printf("\nRadius : %f --- height : %f --- pi : %f\n\n", r, h, pi);

    ans = printarea(r ,h , pi);
    printf("Area of cylinder : %.2f",ans);
}