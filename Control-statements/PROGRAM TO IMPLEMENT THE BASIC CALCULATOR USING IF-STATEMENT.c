#include <stdio.h>

int main()
{
    int num1,num2,res;
    char opera;
    printf("enter the number 1 = ");
    scanf("%d",&num1);
    printf("enter the number 2 = ");
    scanf("%d",&num2);
    printf("enter the operator =  ");
    scanf(" %c",&opera);
    if(opera =='+')
    res=num1+num2;
    else if(opera =='-')
    res=num1-num2;
    else if(opera =='*')
    res=num1*num2;
    else if(opera =='/')
    res=num1/num2;
    else
    printf("invaild operator");
    printf("%d",res);
    
    
}
