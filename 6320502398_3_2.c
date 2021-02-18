#include<stdio.h>
int main ()
{
int n,i,x,y,loc=0;
int s[48]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d %d",&x,&y);
    s[x-1]+=y;
}
int max=0;
for(i=0;i<48;i++)
{
    if(s[i]>max)
    {
        max=s[i];
        loc=i;
    }
}
printf("%d %d",loc+1,max);
}
