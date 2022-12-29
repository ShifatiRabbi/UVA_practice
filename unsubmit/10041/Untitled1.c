#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    int n,a[30000],j,sum=0,dis=0;
    scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        sum=sum/n;
        for(j=0;j<n;j++)
        {
            if(sum>=a[j])
            {
                dis=dis+sum-a[j];
            }
            else
            {
                dis=dis-sum+a[j];
            }
        }
        printf("%d\n",dis);

    }

    return 0;
}
