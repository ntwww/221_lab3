#include<Stdio.h>
int main()
{
    int n,a=2;
    scanf("%d",&n);
    if(n==1)
        printf("%d\n%d",n,0);
    else
    {

        while (1)
        {
            if(n%a==0)
            {
                printf("%d\n",a);
                n/=a;
            }
            else
                a++;
            if (n==1)
            {
             printf("0");
                break;
            }
        }

    }
}
