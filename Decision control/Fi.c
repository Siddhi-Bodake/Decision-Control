#include<stdio.h>
int main()
{
    int ref_year=1900,year,leap=0,diff,total_days=0,day=0;

    printf("Enter a yaer between 1900 and 2099:\n");
    scanf("%d",&year);

    diff = year - ref_year;

    while(ref_year<year)
    {
        if(ref_year%100==0)
        {
            if(ref_year%400==0)
            {
                leap++;
            }
        }
        else
        {
            if(ref_year%4==0)
            {
                leap++;
            }
        }
        ref_year++;
    }

    total_days = (diff - leap) * 365 + leap * 366;
    day        = total_days % 7;

    switch(day)
    {
       
        case 0: printf("Monday");
                break;

        case 1: printf("Tuesday");
                break;

         case 2: printf("Wednesday");
                break;

         case 3: printf("Thursday");
                break;

         case 4: printf("Friday");
                break;

         case 5: printf("Saturday");
                break;

         case 6: printf("Sunday");
                break;
    }
    



}