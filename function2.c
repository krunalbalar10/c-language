// 2) with arguments without return value function 

#include <stdio.h>
void printsymbol(int n, char s)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%c", s);
    }
    printf("\n\n");
}
void main()
{
    char symbol;
    int numb;

    printf("Enter Symbol  : ");
    scanf("%c", &symbol);
    printf("Enter number  : ");
    scanf("%d", &numb);

    printf("\nName    : Krunal Balar\n\n");

    printsymbol(numb, symbol);

    printf("Age     : 24\n\n");

    printsymbol(numb, symbol);

    printf("Weight  : 55 Kg\n\n");

    printsymbol(numb, symbol);
}

// char symbol;
// int i, numb;

// printf("Enter Symbol  : ");
// scanf("%c", &symbol);
// printf("Enter number  : ");
// scanf("%d", &numb);

// printf("Name    : Krunal Balar\n\n");

// for (i = 1; i <= numb; i++)
// {
//     printf("%c", symbol);
// }
// printf("\n\n");

// printf("Age     : 24\n\n");

// for (i = 1; i <= numb; i++)
// {
//     printf("%c", symbol);
// }
// printf("\n\n");

// printf("Weight  : 55 Kg\n\n");

// for (i = 1; i <= numb; i++)
// {
//     printf("%c", symbol);
// }
// printf("\n\n");