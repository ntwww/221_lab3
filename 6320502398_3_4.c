#include<stdio.h>
int main()
{
    int n;
    scanf("%d" ,&n);
    if(n==1)
        printf("1");
    while(n>1)
    {
        if((n%2==0||n%3==0||n%5==0||n%7==0)&&(n!=2&&n!=3&&n!=5&&n!=7))
        {
            n--;
        }
        else
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
}
