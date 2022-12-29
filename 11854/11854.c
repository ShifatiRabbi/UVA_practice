#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c;
    while(scanf("%lld %lld %lld",&a, &b, &c)!= "EOF")
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else if((a+b>c) && (b+c>a) && (c+a>b))
        {
            if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (c*c+b*b==a*a))
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }
        else
        {
            printf("wrong\n");
        }

    }



    return 0;
}
