#include<stdio.h>
int main()
{
    long long int n,i,x,a=1,b=0;
    scanf("%lld %lld",&n, &x);
    for(i=1;i<=1000000000;i++)
    {
        a=a*n;
        b++;
        if(a==x)
        {
            break;
        }
    }
    printf("%lld\n",b);


    return 0;
}
