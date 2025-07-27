
#include <stdio.h>
#include<string.h>
char* my_str(char*p,char *q);
int main()
{
    char a[100]="jagadesh";
    char b[100]=" deadpool";
    //char*p= strcat(a,b);
    char*p= my_str(a,b);
    printf("%s",p);
    
}
char* my_str(char*p,char *q)
{
    int i,j;
    for(i=0;p[i];i++);
    for(j=0;p[i]=q[j];i++,j++);
    return p;

}
