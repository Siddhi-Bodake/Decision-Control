#include<stdio.h>
int main()
{
    int i;
    printf("Enter i:\n");
    scanf("%d",&i);
    if(i==1)
        printf("More question you ask,more you know\n");
    else
    {
        if(i==2)
            printf("If yoi ask questions,you are fool for sometime\n");
        else
            printf("If you dont ask questions you are fool for lifetime\n");
    }
}