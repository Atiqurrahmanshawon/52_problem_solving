#include<stdio.h>

int main()
{
    int tc;
    long int i,a,b,c;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%ld %ld %ld", &a, &b, &c);

        for(i=1; i<=c; i++)
        {
            if(i%a==0 && i%b==0)
            {
                printf("%ld\n", i);
            }
        }

        if(tc!=0)
        {
            printf("\n");
        }
    }



    return 0;
}
