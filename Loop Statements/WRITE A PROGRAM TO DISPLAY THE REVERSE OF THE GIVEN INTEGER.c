#include <stdio.h>

int main()
{
    int num,i,last,rev=0;
    printf("enter the number  = ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        last=num%10;
        rev=(rev*10)+last;
        num=num/10;
    }
    printf("reverse of the given integer = %d\n",rev);
}
