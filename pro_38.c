#include<stdio.h>

int main()
{
    int tc,n,m,i,j;

    scanf("%d", &tc);

    while(tc--)
    {
        printf("tc = %d\n", tc);
        scanf("%d %d", &n, &m);

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf("%d", m);

                if(j!=i)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

        for(i=1; i<n; i++)
        {
            for(j=n-1; j>=i; j--)
            {
                printf("%d ", m);
            }
            if(i!=n-1)
            {
                printf("\n");
            }
        }

        if(tc!=0)
        {
            printf("\n");
        }
    }


    return 0;
}
