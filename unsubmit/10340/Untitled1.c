#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],t[10000];
    while(scanf("%s %s", s, t) != EOF)
    {
        int a = strlen(s);
        int b = strlen(t);
        int i,j,k=0,c=0;

        for(j=0;j<a;j++)
        {
            for(i=k;i<b;i++)
            {
                k++;
                if(s[j]==t[i])
                {
                    c++;
                    break;
                }
            }
            if(k==b)
            {
                break;
            }
        }
        if(c==a)
            printf("Yes\n");
        else
            printf("No\n");


    }

    return 0;
}
