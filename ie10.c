//write a programe to print two digit number in words.
#include<stdio.h>
void main()
{
    int number = 0 , first = 0 , second = 0;

    printf("Enter two digit number : ");
    scanf("%d", &number);

    printf("Number is ==> %d",number);

    first = number/10;
    second = number - (first*10);

    printf("\nFirst Digit : %d\nSecond Digit : %d\n",first,second);

    if(first==0)
    {
        printf("Zero");
    }
    else
    {
        if(first==1)
        {
            printf("One");
        }
        else if(first==2)
        {
            printf("Two");
        }
        else if (first==3)
        {
            printf("Three");
        }
        else if (first==4)
        {
            printf("Four");
        }
        else if (first==5)
        {
            printf("Five");
        }
        else if (first==6)
        {
            printf("Six");
        }
        else if (first==7)
        {
            printf("Seven");
        }
        else if (first==8)
        {
            printf("Eight");
        }
        else if (first==9)
        {
            printf("Nine");
        }
    }

    if(second==0)
    {
        printf("Zero");
    }
    else 
    {
        if(second==1)
        {
            printf("One");
        }
        else if(second==2)
        {
            printf("Two");
        }
        else if(second==3)
        {
            printf("Three");
        }
        else if(second==4)
        {
            printf("Four");
        }
        else if(second==5)
        {
            printf("Five");
        }
        else if(second==6)
        {
            printf("Six");
        }
        else if(second==7)
        {
            printf("Seven");
        }
        else if(second==8)
        {
            printf("Eight");
        }
        else if(second==9)
        {
            printf("Nine");
        }
        
    }
}