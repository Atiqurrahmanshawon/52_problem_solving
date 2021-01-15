#include<stdio.h>

int main()
{
    int tc,i;

    char n[101];

    scanf("%d",&tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%s",&n);
        if((n[strlen(n)-1])%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }



    return 0;
}
