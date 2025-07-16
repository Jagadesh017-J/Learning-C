#include <stdio.h>

int main()
{
    int num,sum=0,i;
    printf("enter the number  = ");
    scanf("%d",&num);
    for(i=2;num>=i;i++)
    {
        if(num%i==0)
        break;
    }
    if(i==num)
    printf("IT'S PRIME NUMBER");
    else
    printf("IT'S  NOT PRIME NUMBER");
}
