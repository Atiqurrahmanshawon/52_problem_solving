#include<stdio.h>

int main()
{
    int tc,k,n;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n);

        for(k=n; k>=0; k--)
        {
            if(k==1)
            {
                printf("2 + ");
            }
            else if(k==0)
            {
                printf("1");
            }
            else
            {
                printf("2^%d + ", k);
            }
        }

        if(tc!=0)
        {
            printf("\n");
        }
    }



    return 0;
}
