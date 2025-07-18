#include<stdio.h>
void fib(int num);
int main()
{
    int abc;
    printf("enter the number = ");
    scanf("%d",&abc);
    fib(abc);
}
void fib(int num)
{
    int x=0,y=1,z;
    for(x=0;x<=num;x=y,y=z)
    {
        printf("%d",x);
        z=x+y;
    }
   
}
