#include<string.h>
#include <stdio.h>
int str(char *p);
int main()
{
    char a[]="hello";
    char *p=(char*)&a;
    //int len= strlen(a);
    int len=str(p);
    printf("%d",len);
}
int str(char *p)
{
    int i;
    for(i=0;p[i];i++);
    return i;
}
