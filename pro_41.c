#include<stdio.h>

long long int fact(long long int n)
{
    long long int i,fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }

    return fact;
}

int main()
{
    long long int i,n;
    double sum;
    int tc;


    scanf("%d", &tc);

    while(tc--)
    {
        sum=0.00;
        scanf("%lld", &n);

        for(i=1; i<=n; i++)
        {
            sum += ((double)i/fact(i));
        }

        printf("%0.4lf\n", sum);
    }


    return 0;
}
