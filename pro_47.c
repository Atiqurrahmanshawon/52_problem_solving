#include<stdio.h>

int main()
{
    int a[100],b[100],c[200],i,j,k,n1,n2,tc,temp;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d", &n1);
        for(i=1; i<=n1; i++)
        {
            scanf("%d", &a[i]);
        }

        scanf("%d", &n2);
        for(i=1; i<=n2; i++)
        {
            scanf("%d", &b[i]);
        }

        for(i=1,j=1; i<=n1; i++,j++)
        {
            c[j]=a[i];
        }

        for(k=j,i=1; i<=n2; i++,k++)
        {
            c[k]=b[i];
        }

        for(i=1; i<=(n1+n2)-1; i++)
        {
            for(j=i+1; j<=n1+n2; j++)
            {
                if(c[i]>c[j])
                {
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;

                }
            }
        }

        for(k=1; k<=n1+n2; k++)
        {
            printf("%d ", c[k]);
        }

        if(tc!=0)
        {
            printf("\n");
        }

    }


    return 0;
}
