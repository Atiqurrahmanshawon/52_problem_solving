#include<stdio.h>

int main()
{
    int tc,n,i,num,ara[100001];

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);

        for(i=1; i<=n; i++)
        {
            ara[i]=0;
        }

        for(i=1; i<=n-1; i++)
        {
            scanf("%d", &num);
            ara[num]=1;
        }

        for(i=1; i<=n; i++)
        {
            if(ara[i]==0)
            {
                printf("%d", i);
                break;
            }
        }

        if(tc!=0)
        {
            printf("\n");
        }
    }


    return 0;
}
