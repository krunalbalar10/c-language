//write a programe for how many days given  month has.

#include<stdio.h>
void main()
{
    int month, number , option, answer;

    printf("Enter number of month is : ");
    scanf("%d", &number);

    printf("Number 1 is for month January\n\n");
    printf("Number 2 is for month Febuary\n\n");
    printf("Number 3 is for month March\n\n");
    printf("Number 4 is for month April\n\n");
    printf("Number 5 is for month May\n\n");
    printf("Number 6 is for month June\n\n");
    printf("Number 7 is for month July\n\n");
    printf("Number 8 is for month August\n\n");
    printf("Number 9 is for month September\n\n");
    printf("Number 10 is for month Octomber\n\n");
    printf("Number 11 is for month November\n\n");
    printf("Number 12 is for month December\n\n");
    scanf("%d", &month);

    if(option==1)
    {
        printf("January has 30 days",option);
    }
    else if(option==2)
    {
        printf("Febuary has 28 or 29 days",option);
    }
    else if(option==3)
    {
        printf("March has 31 days", option);
    }



}