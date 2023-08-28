#include<stdio.h>
void main()
{
    int number, f_n, s_n;
    printf("Enter any two digit number : ");
    scanf("%d",&number);
    printf("Two digit number is %d\n",number);

    f_n = number / 10;

    printf("\nfirst number is %d:\n",f_n);

    s_n = number % 10;

    printf("second number is %d:\n",s_n);
}