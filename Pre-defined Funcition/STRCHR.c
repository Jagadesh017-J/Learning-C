
#include <stdio.h>
#include<string.h>
char* my_str(char*p,char q);
int main()
{
    char a[100]="jagadesh";
    //char*p= strchr(a,'d');
    char*p= my_str(a,'d');
    if(p==NULL)
    printf("char not available");
    else
    printf("char available ---> %s",p);
    
}
char* my_str(char*p,char q)
{
    int i;
    for(i=0;p[i];i++)
    if(p[i]=='d')
    return p+i;
    return 0;
}
