#include<stdio.h>
int main()
{
    int temp,z,last,fact,sum,j;
    for(z=1;z<200;z++)
    {
        temp=z;
        sum=0;
        while(temp>0)
        {
            last=temp%10;
            fact=1;
            for(j=1;j<=last;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            temp/=10;
        }
        if(sum==z)
            printf("%d\n",z);
    }
}
