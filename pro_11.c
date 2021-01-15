#include<stdio.h>

int main()
{
    int tc,i,j,n;

    scanf("%d", &tc);
    for(i=1; i<=tc; i++)
    {
        long long int fact=1,i;

        scanf("%d", &n);
        for(i=2; i<=n; i++)
        {
            fact = fact*i;
        }
        printf("%lld\n", fact);
    }


    return 0;
}
