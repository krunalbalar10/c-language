#include <stdio.h>

float printbmi(int f, int i, int w)
{
    float height, bmi;
    printf("\nweight => %.2d\n", w);
    printf("height => %d.%d\n", f, i);
    // f_m = f_h / 3.281;
    // i_m = i_h / 39.37;
    height = f / 3.281 + i / 39.37;

    bmi = w / (height * height);

    printf("Your BMI vallue is %.2f\n", bmi);

    if (bmi <= 18.4)
    {
        printf("|BMI value is Underweight|");
    }
    else if (bmi > 18.5 && bmi < 24.9)
    {
        printf("|BMI value is Normal|");
    }
    else if (bmi > 25 && bmi < 39.9)
    {
        printf("|BMI value is Overweight|");
    }
    else
    {
        printf("|BMI value is Obese|");
    }
}
void main()
{
    float height, bmi;
    int f_h[5], i_h[5], weight[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("Enter Your weight : ");
        scanf("%d", &weight[i]);

        printf("Enter height in foot : ");
        scanf("%d", &f_h[i]);

        printf("Enter height in inch : ");
        scanf("%d", &i_h[i]);
    }
    printbmi(f_h[0], i_h[0], weight[0]);
        
    printbmi(f_h[1], i_h[1], weight[1]);
        
    printbmi(f_h[2], i_h[2], weight[2]);
        
    printbmi(f_h[3], i_h[3], weight[3]);
        
    printbmi(f_h[4], i_h[4], weight[4]);
    
    
}