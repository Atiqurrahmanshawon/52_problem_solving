#include<stdio.h>

int main()
{
    long long int pascal[51][51];
    int i,j,tc,n;

    pascal[1][0]=1;
    pascal[2][0]=1;
    pascal[2][1]=1;

    for(i=3; i<=50; i++)
    {
        pascal[i][0]=1;

        for(j=1; j<i-1; j++)
        {
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
        pascal[i][j]=1;
    }


    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);


        for(i=1; i<=n+1; i++)
        {
            for(j=0; j<i; j++)
            {
                printf("%lld", pascal[i][j]);

                if(j!=i)
                {
                    printf(" ");
                }
            }

            if(i!=n+1)
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
