#include <stdio.h>

int main()
{
    int num,sum=0,i;
    printf("enter the number  = ");
    scanf("%d",&num);
    for(i=1;num>i;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
    printf("IT'S PERFECT NUMBER");
    else
    printf("IT'S  NOT PERFECT NUMBER");
}
