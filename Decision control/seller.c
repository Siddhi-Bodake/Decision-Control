#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter the cost price and selling price:\n");
    scanf("%f%f",&cp,&sp);

    p=sp-cp;
    l=cp-sp;

    if(p>0)
    printf("Seller made a profit of RS.%f\n",p);

    if(l>0)
    printf("seller incurred loss of Rs.%f\n",l);

    if(p==0)
    printf("There is No loss,No profit\n");

    return 0;
}