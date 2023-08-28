#include<stdio.h>
void main()
{
    int month, year, LY;
    printf("Enter month : ");
    scanf("%d",&month);
    printf("Enter year : ");
    scanf("%d",&year);

    printf("\nMonth =  %d\n\nYear =  %d\n\n",month, year);

    LY = year % 4;
    
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("This Month has 31 days");
    }
    else if( month==4 || month==6 || month==9 || month==11)
    {
        printf("This month has 30 days");
    }
    else if(LY!=0 && month==2)
    {
        printf("This month has 28 days");
    }
    else if (LY==0 && month==2)
    {
        printf("This is a Lip year and it has 29 days");
    }
    else
    {
        printf("Invalid month please try again later with correct month");
    }
}