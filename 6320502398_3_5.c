#include <stdio.h>
int main ()
{
    int n,x,i,s=0;
    scanf ("%d",&n);
    x=n;
    for (i=2; ;i++)
    {
        if (x%i==0)
        {
            x=x/i;
            s++;
        }
        else
        {
            break;
        }

    }
    if (s!=3)
    {
            printf ("%d is not a Lucky Number.",n);
    }
        else
    {
             printf ("%d is a Lucky Number",n);
    }
    return 0;
}
