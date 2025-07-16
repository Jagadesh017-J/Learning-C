#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum,digit,temp,num;
    for(i=1;i<1000;i++)
    {
        digit=0;
        num=i;
        while(num!=0)
        {
            num/=10;
            digit++;
        }
        sum=0;
        num=i;
        while(num!=0)
        {
            temp=num%10;
            sum=sum+pow(temp,digit);
            num/=10;
        }
        if(sum==i)
        printf("%d\n",i);
    }
}
