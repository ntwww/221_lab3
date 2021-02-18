#include<Stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for (a=2; n!=0; a++)
    {
        while (n%a==0)
        {
            printf("%d\n",a);
            n/=a;
            if (n==1)
                printf("0");
        }
    }
}
