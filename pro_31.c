#include<stdio.h>
#include<math.h>

int main()
{
    int tc,i,j,num,sum,n,root;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d", &n);

        for(num=1; num<=n; num++)
        {
            sum=1;

            root=sqrt(num);

            for(j=2; j<=root; j++)
            {
                if(num%j==0)
                {
                    sum=sum+j+(num/j);
                }
            }

            if(num==sum)
            {
                printf("%d\n", num);
            }
        }
    }



    return 0;
}
