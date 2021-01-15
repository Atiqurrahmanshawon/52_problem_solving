#include<stdio.h>
#include<math.h>

long long int is_prime(long long int n)
{
    long long int sqrt_root,j;
    if(n==2)
    {
        return 1;
    }

    if(n>3)
    {

        sqrt_root=sqrt(n);

        printf("%lld\n", sqrt_root);

        for(j=2; j<=sqrt_root; j++)
        {
            if(n%j==0)
            {
                return 0;
            }
        }

        return 1;
    }

}

int main()
{
    int i,root,tc;
    long long int num;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%lld", &num);

        if(is_prime(num)==1)
        {
            printf("%lld is a prime", num);
        }
        else
        {
            printf("%lld is not a prime", num);
        }

        if(tc!=0)
        {
            printf("\n");
        }
    }


    return 0;
}
