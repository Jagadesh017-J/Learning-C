//WRITE A PROGRAM TO FIND GIVEN NUMBER IS STRONG NUMBER OR NOT..
#include <stdio.h>

int main()
{
    int num,i,j,mul,total,temp,b,n;
    for(num=1;num<=100000;num++)
    {
        temp=num;
        n=num;
        total=0;
        for(i=0;n!=0;i++)
        {
            b=n%10;
            mul=1;
            for(j=1;j<=b;j++)
            {
                mul=mul*j;
            } 
            total=total+mul;
            n/=10;
        }
        if(temp==total)
        printf("%d\n",temp);
    }
}
