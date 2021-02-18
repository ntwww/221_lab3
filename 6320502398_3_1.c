#include <stdio.h>
int main()
{
    int a[5][4], b[5],i,j,loc,max;
    for(i=0; i<5; i++)
    {
        b[i]=0;
            for(j=0; j<4; j++)
            {
                scanf("%d",&a[i][j]);
                b[i]+=a[i][j];
            }
    }
    max= b[0];
    for(i=0 ;i<5;i++)
    {
        if(max<b[i])
        {
            loc=i;
            max=b[i];
        }
    }
printf("%d %d",loc+1,max);
}


