#include<stdio.h>

int main()
{
    int tc,i,n1,n2,n3,temp;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);

        if(n1>n2)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        if(n1>n3)
        {
            temp=n1;
            n1=n3;
            n3=temp;
        }
        if(n2>n3)
        {
            temp=n2;
            n2=n3;
            n3=temp;
        }
        printf("case %d: %d %d %d\n",i,n1,n2,n3);
    }


    return 0;
}
