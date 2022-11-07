#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the angle a:\n");
    scanf("%d",&a);

    printf("Enter the angle b:\n");
    scanf("%d",&b);

    printf("Enter the angle c:\n");
    scanf("%d",&c);

    sum=a+b+c;



    if(sum==180 && a>0 && b>0 && c>0)
     printf("This is a Triangle\n");

     else

     printf("This is not triangle\n");

     return 0;

    
    
}