#include<stdio.h>

int main()
{
    int tc,n,i,j,ara[100];
    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d", &n);

        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[j]);
        }

        for(j=0; j<n; j+=2)
        {
            printf("%d ", ara[j]);
        }
        printf("\n");
    }



    return 0;
}
