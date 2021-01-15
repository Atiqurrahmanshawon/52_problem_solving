#include<stdio.h>
#include<math.h>

int main()
{
    int tc,root,i,j;
    long long unsigned n, sum;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        //sum=1;
        sum=0;

        scanf("%llu", &n);

        //root=sqrt(n);

        //for(j=2; j<=root; j++)
        for(j=1; j<n; j++)
        {
            if(n%j==0)
            {
                sum=sum+j;
                //sum=sum+j+(n/j);
            }
        }

        if(n==sum)
        {
            printf("YES, %llu is a perfect number!\n", n);
        }
        else
        {
            printf("NO, %llu is not a perfect number!\n", n);
        }
    }



    return 0;
}
