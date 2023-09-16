#include <stdio.h>
struct name
{
    char name[20];

}n[3];
void main()
{
    int marks[3][3], i, j, total[3], avg[3];

    for (j = 0; j <= 2; j++)
    {
        printf("\nMarks of Student %d name :  ", j + 1);
        scanf("%s",&n[j].name);

        for (i = 0; i <= 2; i++)
        {
            printf("Enter subject %d marks = ", i + 1);
            scanf("%d", &marks[j][i]);
        }
    }

    for (j = 0; j <= 2; j++)
    {
        printf("\n***************************Student %d*****************************\n\n", j + 1);
        printf("Name of student 1 : %s\n",n[j].name);

        for (i = 0; i <= 2; i++)
        {
            printf("Subject %d marks = %d\n ", i + 1, marks[j][i]);
        }
        total[j] = marks[j][0] + marks[j][1] + marks[j][2];
        avg[j] = total[j] / 3;
        printf("Total Marks = %d\n", total[j]);
        printf("Average     = %d\n", avg[j]);
    }

    if (avg[0] > avg[1] && avg[0] > avg[2])
    {
        printf("|Student 1 has highest marks|");
    }

    else if (avg[1] > avg[0] && avg[1] > avg[2])
    {
        printf("|Student 2 has highest mark|");
    }

    else if (avg[2] > avg[1] && avg[2] > avg[0])
    {
        printf("|Student 3 has highest marks|");
    }
}