#include <stdio.h>

int main()
{
    int num,i,last,sum=0;
    printf("enter the number 1 = ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        last=num%10;
        sum=sum+last;
        num=num/10;
    }
    printf("sum of given integer = %d",sum);
}
