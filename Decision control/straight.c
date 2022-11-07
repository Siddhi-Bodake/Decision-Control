#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,m,n;

    printf("Enter the cooridinates(x1,y1):\n");
    scanf("%f%f",&x1,&y1);

    printf("Enter the cooridinates(x2,y2):\n");
    scanf("%f%f",&x2,&y2);

    printf("Enter the cooridinates(x3,y3):\n");
    scanf("%f%f",&x3,&y3);

    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);

    if(m==n)
    {
    printf(" All 3 Points fall on same straight line\n");
    }
    else
    {
        printf("Al 3 points not fall on same straigt line\n");
    }
    return 0;
}