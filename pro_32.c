#include<stdio.h>

int main()
{
    int i,j,tc,x,n;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d %d", &x, &n);

        for(j=1; j*x<=n; j++)
        {
            printf("%d\n", j*x);
        }

        if(i!=tc)
        {
            printf("\n");
        }
    }



    return 0;
}
