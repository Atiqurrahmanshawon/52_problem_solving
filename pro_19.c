#include<stdio.h>

int main()
{
    int tc,i,j,count;
    char s[10000];

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        count=0;
        scanf(" %[^\n]", s);

        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]==' ')
            {
                count++;
            }
        }

        printf("count = %d\n", count+1);
    }



    return 0;
}
