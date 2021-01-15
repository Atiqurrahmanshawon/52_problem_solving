#include<stdio.h>

int main()
{
    int tc,i,n,j,ara[20],sorted;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        sorted=1;
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[j]);
        }



        for(j=1; j<n; j++)
        {
            if(ara[j] < ara[j-1])
            {
                sorted=0;
                break;
            }
        }


        if(sorted==0)
        {
            for(j=1; j<n; j++)
            {
                if(ara[j] > ara[j-1])
                {
                    sorted=0;
                    break;
                }
                //else{sorted=1;}

            }
            if(j>n-1)
            {
                sorted=1;
            }
        }

        if(sorted==1)
        {
            printf("YES\n");
        }
        if(sorted==0)
        {
            printf("NO\n");
        }

    }



    return 0;
}
