#include <stdio.h>
void main()
{
    int student[6], mark[6], i;

    for (i = 0; i <= 5; i++)
    {
        printf("Mark of Student %d is  ", i + 1);
        scanf("%d", &mark[i]);
    }

    for (i = 0; i <= 5; i++)
    {
        printf("\nStudent %d have scored %d Marks\n", i + 1, mark[i]);
    }

    for (i = 0; i <= 6; i++)
    {
        if (mark[i] < 28 && mark[i] >= 0)
        {
            printf("Student %d have F Grade\n", i + 1);
        }
        else if (mark[i] >= 28 && mark[i] < 50)
        {
            printf("Student %d have C Grade\n", i + 1);
        }
        else if (mark[i] >= 50 && mark[i] < 80)
        {
            printf("Student %d have B Grade\n", i + 1);
        }
        else if (mark[i] >= 80 && mark[i] <= 100)
        {
            printf("Student %d have A Grade\n", i + 1);
        }
        else
        {
            printf("Invalid mark");
        }
    }
}
