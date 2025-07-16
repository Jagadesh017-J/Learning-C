#include<stdio.h>
int main()
{
    int i,j,temp;
    for(i=1;i<=100;i++)
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
    if((temp==0)&&(i%10==7))
    printf("%d\n",i);
    }
}
