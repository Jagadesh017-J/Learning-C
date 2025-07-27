#include<stdio.h>
int main()
{
        char m[20] = "jagadesh",s[20]="gade";
        int i,j;
        for(i=0;m[i];i++)
        {
            if(m[i]==s[0])
            {
                for(j=1;s[j];j++)
                {
                    if(m[j+i]!=s[j])
                    break;
                }
                if(s[j]=='\0')
                printf("%s",m+i);
                return 0;
            }
            
        }
        printf("not found");
}
