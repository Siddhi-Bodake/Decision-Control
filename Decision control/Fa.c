#include<stdio.h>
int main()
{
    int num,a,b,c,d,rev,d1,d2,d3,d4,d5,d6;
    printf("Enter your number:\n");
    scanf("%d",&num);

    a=num/10;
    d5=num%10;

     b=a/10;
    d4=a%10;

     c=b/10;
    d3=b%10;

     d=c/10;
    d2=c%10;

    
    d1=d%10;

    rev=d5*10000+d4*1000+d3*100+d2*10+d1*1;
    printf("reverse number of %d id %d\n",num,rev);

    if(num==rev)
    printf("%d %d orignal number and reverse number are eqaual\n",num,rev);
    else
    printf("orignal and reverse number are not equal\n");

    return 0;


}