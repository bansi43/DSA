#include<stdio.h>
int main()
{
    int a[5]={11,22,33,44,55},i,c;
    for(i=0;i<5;i++)
    {
        c=a[0];
        a[0]=a[4];
        a[4]=c;
        printf("\t%d",a[i]);
    }
}