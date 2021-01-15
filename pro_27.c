#include<stdio.h>

int main()
{
    int tc,n,i,x,a,temp;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        a=0;
        scanf("%d", &n);
        temp=n;

        while(n != 0)
        {
            x=n%10;
            a+=(x*x*x);
            n=n/10;
        }

        if(temp==a)
        {
            printf("%d is an armstrong number!\n", temp);
        }
        else
        {
            printf("%d is not an armstrong number!\n", temp);
        }
    }



    return 0;
}
