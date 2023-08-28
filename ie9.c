#include<stdio.h>
void main()
{
    int weight , h_f , h_i;
    float BMI,f_m, i_m, height;
    printf("Enter your weight : ");
    scanf("%d", &weight);
    printf("Enter your height in foot : ");
    scanf("%d", &h_f);
    printf("Enter your height in inch : ");
    scanf("%d", &h_i);
    
    printf("\nyour weight = %d\nyour height in foot = %d\nyour height in inch = %d\n",weight,h_f, h_i);

    f_m = h_f / 3.281;
    printf("height in foot to meter : %.2f\n", f_m);

    i_m = h_i / 39.37;
    printf("height in inch to meter : %.2f\n", i_m);

    height = f_m + i_m;
    printf("Total height in meter : %.2f\n",height);

    BMI = weight/(height*height);
    printf("Your BMI value => %.2f",BMI);

    if(BMI<=18.4)
    {
        printf("|BMI value is Underweight|");
    }
    else if(BMI>18.5 && BMI<24.9)
    {
        printf("|BMI value is Normal|");
    }
    else if (BMI>25 && BMI<39.9)
    {
        printf("|BMI value is Overweight|");
    }
    else
    {
        printf("|BMI value is Obese|");
    }

}