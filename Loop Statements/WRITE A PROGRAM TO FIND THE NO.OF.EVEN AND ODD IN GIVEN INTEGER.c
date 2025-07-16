#include <stdio.h>

int main()
{
    int num,i,last,even=0,odd=0;
    printf("enter the number 1 = ");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        last=num%10;
        if(last%2==0)
        even++;
        else
        odd++;
        num=num/10;
    }
    printf("no.of.even = %d\n no.of.odd = %d\n",even,odd);
}
