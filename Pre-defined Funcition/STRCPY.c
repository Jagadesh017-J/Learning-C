#include<string.h>
#include <stdio.h>
char* my_str(char *q,char*p);
int main()
{
    char a[]="hello",b[20];
    char *p=(char*)&a;
    char *q=(char*)&b;
    //strcpy(b,a);
    my_str(b,a);
    printf("%s",b);
}
char* my_str(char *q,char *p)
{
    int i;
    for(i=0;p[i]!='\0';i++)
    {
        q[i]=p[i];
    }
    q[i]='\0';
    return q;
}
