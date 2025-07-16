#include <stdio.h>
#include<math.h>//need to use this header file pow(x,y) operator..
int main()
{
    int num,sum=0,i,last,temp,power=0;
    printf("enter the number  = ");
    scanf("%d",&num);
    temp=num;
    for(i=1;num!=0;num/=10)
    {
        power++;
    }
    num=temp;
    for(i=1;num!=0;num/=10)
    {
        last=num%10;
        sum=sum+pow(last,power);
    }
    
    if(sum==temp)
    printf("IT'S ARMSTRONG NUMBER");
    else
    printf("IT'S  NOT ARMSTRONG NUMBER");
}
