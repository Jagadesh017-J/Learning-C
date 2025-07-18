#include<stdio.h>
int prime(int num);
int main()
{
    int res,num;
    printf("enter the number = ");
    scanf("%d",&num);
    res=prime(num);
    printf(" return = %d\n",res);
    
}
int prime(int num)
{
    int prime=1,i,out;
    for(i=2;i<num;i++)
    if(num%2==0)
    prime=0;
    if(prime == 0)
    {
         printf("the given is NOT prime \n");
         out=1;
    }
   
    else
    {
         printf("the given is  prime \n");
         out=0;
    }
    return out;
   
}
