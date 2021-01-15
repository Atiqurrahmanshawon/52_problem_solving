#include<stdio.h>

int main()
{
    int tc,number,quotient=1,remainder,i,lsd,sum;

    scanf("%d",&tc);

    for(i=1;i<=tc;i++)
    {
        lsd=0;
        sum=0;
        scanf("%d",&number);

        lsd=number%10;

        while(quotient!=0)
        {
            number=number/10;
            remainder=number%10;
            quotient=number/10;
        }
        quotient=1;

        sum=remainder+lsd;

        printf("Sum = %d\n",sum);

    }


    return 0;
}
