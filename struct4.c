#include<stdio.h>

struct name
{
    char name[20];

}n[5];
void main()
{
    int i;
    for(i = 0; i <= 4; i++)
    {
        printf("Enter user %d name : ",i+1);
        scanf("%s",&n[i].name);
    }

    for(i = 0; i <= 4; i++)
    {
        printf("User 1 Name is => %s\n",n[i].name);
    }
}
