#include<stdio.h>
int main()
{
    int yr;
    printf("Enter year:\n");
    scanf("%d",&yr);

    if(yr%100==0)
    {
        if(yr%400==0)
        printf("Leap year\n");

        else 
        printf("Not leap year\n");
    }
    else
    {
        if(yr%4==0)
        printf("Leap year\n");

        else
        printf("Not leap year\n");
    }

    return 0;
}