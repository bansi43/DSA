#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55},i,c;

    c=a[0];
   
    for(i=0;i<5;i++)
    {
        a[i]=a[i+1];
    }
    a[5-1]=c;
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}