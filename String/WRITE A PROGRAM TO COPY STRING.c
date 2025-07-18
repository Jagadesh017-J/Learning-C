#include<stdio.h>
int main()
{
    char s[]="THE ROCKET",t[20];
    int i,size;
    for(size=0;s[size]!=0;size++);
    for(i=0;i<size;i++)
    {
        t[i]=s[i];
    }
    t[i]=0;
    printf("%s\n",t);
}
