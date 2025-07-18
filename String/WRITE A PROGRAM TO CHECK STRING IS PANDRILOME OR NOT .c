#include<stdio.h>
int main()
{
    char s[]="MOM";
    int i,j,temp=0;
    for(j=0;s[j]!=0;j++);
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
          temp=1;
          break;
        }
        
    }
    if(temp==1)
    printf("THE STRING IS NOT PANLIDROME");
    else
    printf("THE STRING IS PANLIDROME");
      
}
