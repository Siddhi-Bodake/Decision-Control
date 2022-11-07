#include<stdio.h>
  
int main()  
{  
    float length, width, area, perimeter;  
  
    printf("Enter length of the Rectangle\n");  
    scanf("%f", &length);  
  
    printf("Enter width of the Rectangle\n");  
    scanf("%f", &width);  
  
    area      =     (length * width);  
    perimeter = 2 * (length + width);  
  
    if(area > perimeter)  
    {  
        printf("yes, area(%0.2f) is greater than its perimeter(%0.2f)\n",   
               area, perimeter);  
    }  
    else  
    {  
        printf("Area(%0.2f) is not greater than its perimeter(%0.2f)\n",   
               area, perimeter);  
    }  
  
    return 0;  
}  