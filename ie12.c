//write a programe to findout user zodiac sign from given month and day
#include<stdio.h>
void main()
{
    int month = 0, day = 0;
    printf("Enter month : ");
    scanf("%d",&month);
    printf("Enter day : ");
    scanf("%d", &day);

    printf("\nMonth :  %d\nDay :  %d\n",month,day);

    if(month==3 && day>=21 && day<=31)
    {
        printf("Zoidac sign is Aries");
    }
    else if (month==4 && day>=19 && day<=30)
    {
        printf("Zodiac sign is Taurus");
    }   
    else if(month==4 && day>=1 && day<=20)
    {
        printf("Zodiac sign is Aries");
    }
    else if (month==5 && day>=21 && day<=31)
    {
        printf("Zodiac sign is Gemini");
    }
    else if (month==5 && day>=1 && day<=20)
    {
        printf("Zodiac sign is Taurus");
    }
    else if(month==6 && day>=1 && day<=20)
    {
        printf("Zodiac sign is Gemini");
    }
    else if(month==6 && day>=21 && day<=30)
    {
        printf("Zodiac sign is Cancer");
    } 
    else if (month==7 && day>=22 && day<=31)
    {
        printf("Zodiac sign is Cancer");
    }
    else if (month==7 && day>=1 && day<=23)
    {
        printf("Zodiac sign is Leo");
    }
    else if(month==8 && day>=22 && day<=31)
    {
        printf("Zodiac sign is Leo");
    }
    else if (month==8 && day>=1 && day<=21)
    {
        printf("Zodiac sign is Virgo");
    }
    else if (month==9 && day>=1 && day<=22)
    {
        printf("Zodiac sign is Virgo");
    }
    else if(month==9 && day>=23 && day<=30)
    {
        printf("Zodiac sign is Libra");
    }
    else if (month==10 && day>=1 && day<=22)
    {
        printf("Zodiac sign is Libra");
    }
    else if(month==10 && day>=23 && day<=31)
    {
        printf("Zodiac sign is Scorpio");
    }
    else if(month==11 && day>=1 && day<=21)
    {
        printf("Zodiac sign is Scorpio");
    }
    else if(month==11 && day>=22 && day<=30)
    {
        printf("Zodiac sign is Sagittarius");
    }
    else if (month==12 && day>=1 && day<=21)
    {
        printf("Zodiac sign is Sagittarius");
    }
    else if (month==12 && day>=22 && day<=31)
    {
        printf("Zodiac sign is Capricorn");
    }
    else if (month==1 && day>=1 && day<=19)
    {
        printf("Zodiac sign is Capricorn");
    }
    else if(month==1 && day>=20 && day<=31)
    {
        printf("Zodiac sign is Aquarius");
    }
    else if (month==2 && day>=1 && day<=18)
    {
        printf("Zodiac sign is Aquarius");
    }
    else if (month==2 && day>=19 && day<=28 || day<=29)
    {
        printf("Zodiac sign is Pisces");
    }
    else if(month==3 && day>=1 && day<=20)
    {
        printf("Zodiac sign is Pisces");
    }
    else 
    {
        printf("Invalid month or Date");
    }
}