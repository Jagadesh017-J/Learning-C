#include <stdio.h>

int main()
{
    int input;
    printf("enter the number = ");
    scanf("%d",&input);
    if(((input>='a')&&(input<='z'))||((input>='A')&&(input<='Z')))
    printf("GIVEN INPUT IS ALPHABET");
    else if(((input>='0')&&(input<='9')))
    printf("GIVEN IS INTEGER");
    else
    printf("GIVEN IS SPECIAL CHARACTER");
    
}
