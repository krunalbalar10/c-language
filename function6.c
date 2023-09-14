// 4) with arguments with return value function
#include<stdio.h>
int Add(int n1, int n2)
{
    int add;
    add = n1 + n2;
    return add;
}
int Sub(int n1, int n2)
{
    int sub;
    sub = n1 - n2;
    return sub;
}
int mult(int n1, int n2)
{
    int Mult;
    Mult = n1 * n2;
    return Mult;
}
float Div(float n1, float n2)
{
    float div;
    div = n1 / n2;
    return div;
}
void main()
{
    int num1, num2, ans;
    float div;

    printf("Enter value of number 1 = ");
    scanf("%d",&num1);
    printf("Enter value of number 2 = ");
    scanf("%d", &num2);

    printf("Number 1 : %d and Number 2 : %d\n" , num1 , num2);

    ans = Add(num1, num2);
    printf("Addition = %d\n", ans);

    ans = Sub(num1, num2);
    printf("Substraction = %d\n",ans);

    ans = mult(num1, num2);
    printf("Multiplication = %d\n",ans);

    div = Div(num1, num2);
    printf("Division = %.2f\n",div);
}