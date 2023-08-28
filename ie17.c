/*Marks       Grade

100 - 80     Distinction A

79 - 60       First Class B

59 - 45       Second Class C

45 -33          pass D

33 -           fail F       */

#include<stdio.h>
void main()
{
    int mark = 0;
    printf("Enter your mark : ");
    scanf("%d",&mark);

    printf("Your mark is %d",mark);

    if (mark>=80 && mark<=100)
    {
        printf("You have passed this exam with O grade");
    } 
    else if (mark>=60 && mark<80)
    {
        printf("You have passed this exam with A grade");
    }
    else if (mark>=45 && mark<60)
    {
        printf("You have passed this exam with B grade");
    }
    else if (mark>=28 && mark<45)
    {
        printf("You have passed this exam with C grade");
    }
    else 
    {
        printf("You have failed in this exam");
    }
}