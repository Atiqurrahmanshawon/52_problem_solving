#include<stdio.h>

int main()
{
    int tc,i,a,b,c;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d %d %d", &a, &b, &c);

        for(i=a; i<=b; i++)
        {
            if(i%c==0)
            {
                printf("%d\n", i);
            }
        }

        if(tc!=0)
        {
            printf("\n");
        }

    }



    return 0;
}
