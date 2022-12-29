#include<stdio.h>
int main()
{
    int t,i,n,a[1000],j,c;
    double m,sum,x;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        sum=0;
        c=0;
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }

        x=sum/n;

        for(j=0; j<n; j++)
        {
            if(a[j]>x)
                c++;
        }

        m=(c/(n*1.0))*100;
        printf("%.3lf%%\n",m);
    }


    return 0;
}
