#include<stdio.h>
int main()
{
    int a=2,n,x=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d\n",n);
    }
    while(n!=1)
    {
        if(n%a==0)
        {
            while(n%a==0)
            {
                printf("%d\n",a);
                n/=a;
            }
        }
        a++;
    }
    printf("%d",x);
    return 0;
}
