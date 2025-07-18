#include<stdio.h>
int main()
{
    char s[]="abc7594/*-/-/-*";
    int i,size,alpha=0,digits=0,special=0;
    for(size=0;s[size]!=0;size++);
    size=size-1;
    for(i=0;i<size;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        alpha++;
        else if(s[i]>='0'&&s[i]<='9')
        digits++;
        else
        special++;
    }
    printf("no.of.alpha = %d\n no.of.digits = %d\n no.of.special = %d\n",alpha,digits,special);
}
