#include<stdio.h>
void main()
{
    float weight, height, im, fm, BMI;
    int hf, hi;

    printf("enter your weight : ");
    
    scanf("%f",&weight);

    printf("enter your height in foot : ");

    scanf("%d",&hf);

    printf("enter your heigth in inch : ");

    scanf("%d", &hi);

    printf("\n\nyour weight : %.2f\n\n",weight);
    printf("your height in foot : %d\n\n",hf);
    printf("your height in inch : %d\n\n",hi);
        
    fm=hf/3.281;
    printf("foot converted into meter is : %f\n\n",fm);

    im=hi/39.37;
    printf("inch converted into meter is : %f\n\n",im);

    height = fm + im;
    printf("total height is %.2f\n\n",height);

    BMI= weight / (height*height);
    printf("your BMI value is %.2f",BMI);


}