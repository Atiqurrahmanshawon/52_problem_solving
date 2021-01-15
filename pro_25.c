#include<stdio.h>

int func_gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int tc,i,a,b,x,y,lcm,gcd;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d %d", &a, &b);

        x=a;
        y=b;

        if(a==0)
        {
            gcd=a;
        }
        else if(b==0)
        {
            gcd=b;
        }
        else
        {
            gcd=func_gcd(a,b);
            //printf("GCD = %d\n", gcd);
            lcm=(x*y)/gcd;

            printf("LCM = %d\n", lcm);
        }
    }



    return 0;
}
