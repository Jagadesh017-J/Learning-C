#include <stdio.h>

int main()
{
    int num,i;
    printf("enter the number 1 = ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        num=num/10;
    }
    printf("No.of.digits in given integer = %d",i);
}
