#include<stdio.h>
int main()
{
    char a[100];
    int i,j,z,start=0,size,temp,str;
    printf("enter the string  = ");
    scanf(" %[^\n]",a);
    for(size=0;a[size]!='\0';size++);
    size=size-1;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            str=i;
            for(z=start,j=str;z<str;z++,j--)
            {
               temp=a[z];
               a[z]=a[j];
               a[j]=temp;
              
            }
            start=i+1;
        }
    }
    for(z=start,j=size;z<j;z++,j--)
    {
        temp=a[z];
        a[z]=a[j];
        a[j]=temp;
    }
    printf("%s",a);
}
