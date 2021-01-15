#include<stdio.h>

int main()
{
    int tc,count,i;
    double x;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        count=0;
        scanf("%lf", &x);

        while(x > 1.00)
        {
            x=x/2;
            count++;
        }
        printf("%d\n", count);
    }



    return 0;
}
