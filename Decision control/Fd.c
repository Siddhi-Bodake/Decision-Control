#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    num=n;

    if(num<0)
    {
        num=(-1)*num;
    }
    printf("your absolute number is %d",num);

    return 0;

}