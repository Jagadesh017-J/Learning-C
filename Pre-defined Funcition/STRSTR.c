
#include <stdio.h>
#include<string.h>
char* my_str(char*p,char *q);
int main()
{
    char a[100]="jagadesh";
    char b[100]="ades";
    //char*p= strstr(a,b);
    char* p= my_str(a,b);
    printf("%s",p);
    
    
}
char* my_str(char*p,char *q)
{
    int i,j;
    for(i=0;p[i];i++)
    {
        if(p[i]==q[0])
        for(j=1;q[j];j++)
        {
            if(p[i+j]!=q[j])
            break;
        }
        if(q[j]=='\0')
        return p+i;
    }

}
