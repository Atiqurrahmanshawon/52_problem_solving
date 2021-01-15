#include<stdio.h>

int main()
{
    int tc,n,i,j,k;

printf("enter value:\n");
    scanf("%d",&tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i!=tc)
        {
            printf("\n");
        }
    }

    return 0;
}
