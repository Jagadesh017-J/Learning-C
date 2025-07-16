#include <stdio.h>

int main()
{
    int num,i,last,rev=0,temp;
    printf("enter the number  = ");
    scanf("%d",&num);
    temp=num;
    for(i=0;num!=0;i++)
    {
        last=num%10;
        rev=(rev*10)+last;
        num=num/10;
    }
    if(temp==rev)
    printf("PANLIDROME NUMBER");
    else
    printf(" NOT PANLIDROME NUMBER");
}
