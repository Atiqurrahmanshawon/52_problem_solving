#include<stdio.h>

int main()
{
    int even[21], odd[21];
    int i,j,k,n,tc;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);

    even[0]=1;
    even[1]=1;

    printf("%d\n", even[0]);
    printf("%d %d\n", even[0], even[1]);

    for(i=3; i<=n+1; i++)
    {
        if(i%2==0)
        {
            even[0]=1;
            for(j=1; j<i-1; j++)
            {
                even[j]=odd[j-1]+odd[j];
            }
            even[j]=1;

            for(k=0; k<=j; k++)
            {
                printf("%d", even[k]);
                if(k!=j)
                {
                    printf(" ");
                }
            }
            if(k>j)
            {
                printf("\n");
            }
        }
        else
        {
            odd[0]=1;

            for(j=1; j<i-1; j++)
            {
                odd[j]=even[j-1]+even[j];
            }
            odd[j]=1;

            for(k=0; k<=j; k++)
            {
                printf("%d", odd[k]);
                if(k!=j)
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    }


    return 0;
}

