#include<stdio.h>
void main()
{
    char alphabet = ' ';
    printf("Enter the value of alphabet : ");
    scanf("%c",&alphabet);

    printf("Alphabet ==> %c \n\n",alphabet);
    
    switch(alphabet)
    {
        case 'a':
              printf("It is vowel");
              break;

        case 'i':
              printf("It is vowel");
              break;
        case 'o':
              printf("It is vowel");
              break;
        case 'e':
              printf("It is vowel");
              break;
        case 'u':
              printf("It is vowel");
              break;
        default:
            printf("It is not vowel");

          
    }
}