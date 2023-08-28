#include<stdio.h>
void main()
{
    int m_i, y_i , t_r;
    float ia_tax, t_s;
    printf("Enter monthly income : ");
    scanf("%d", &m_i);
    
    printf("Monthly income = %d\n\n", m_i);

    y_i = m_i * 12;
    printf("Yearly income = %d\n\n",y_i);

    printf("Tax rate : ");
    scanf("%d", &t_r);
    
    ia_tax = (t_r * y_i)/100;
    printf("Tax given in income is %.2f\n\n",ia_tax);

    t_s = y_i - ia_tax;
    printf("Total income with tax is %.2f\n\n",t_s);
    
    if(t_s<300000)
    {
        printf("Income is less than 300000 than tax rate will be 5.");
    }
    else if (t_s >= 300000 && t_s < 500000)
    {
        printf("Income is between 300000 and 500000 than tax rate will be 10");
    }
    else if (t_s >= 500000 && t_s <= 800000)
    {
        printf("Income is between 500000 and 800000 than tax rate will be 20");
    }
    else
    {
        printf("Income is greater than 800000 than tax rate will be 30");
    }
}