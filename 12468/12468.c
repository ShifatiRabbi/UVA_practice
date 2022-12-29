#include<stdio.h>
int main()
{
    int a,b,temp,x;
    while(scanf("%d%d",&a,&b)!="EOF")
    {
        if(a==-1 && b==-1)
        {
            break;
        }
        else
        {
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            if(b<50)
            {
                x=b-a;
            }
            else
            {
                x=99+a-b+1;
            }

        }
        if(x<50)
            printf("%d\n",x);
        else
            printf("%d\n",100-x);
    }



    return 0;
}
