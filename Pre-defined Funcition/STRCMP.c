
#include <stdio.h>
#include<string.h>
int my_str(char*p,char *q);
int main()
{
    char a[100]="jagadesh";
    char b[100]="adesh";
    //int p= strcmp(a,b);
    int p= my_str(a,b);
    if(p==0)
    printf("both are equal");
    else if(p>0)
    printf("s1>s2");
    else
    printf("s2>s1");
    
    
}
int my_str(char*p,char *q)
{
    int i,j;
    for(i=0;p[i]!='\0'&&p[i]==q[i];i++);
    return p[i]-q[i];

}
