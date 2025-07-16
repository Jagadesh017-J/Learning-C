#include<stdio.h>
int main()
{
    int i,j,temp,count=0;
    for(i=1;count<100;i++)
    {
        temp=0;
        for(j=2;i>j;j++)
        {
        if(i%j==0)
        {
        temp=1;
        break;
        }
            
        }
        if(temp==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
}
