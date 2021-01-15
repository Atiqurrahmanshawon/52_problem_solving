#include<stdio.h>

int main()
{
    int tc,n,i,rev;
    scanf("%d", &tc);

    while(tc--)
    {
        rev=0;
        scanf("%d", &n);

        while(n!=0)
        {
            rev=rev*10;
            rev=rev+(n%10);
            n=n/10;
        }

        printf("%d\n", rev);
    }


    return 0;
}
