#include<stdio.h>

int main()
{
    int tc,i,j;
    char s[101];

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf(" %[^\n]", s);

        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]>='A' && s[j]<='Z')
            {
                printf("%d", s[j]-64);
            }
        }

        printf("\n");
    }



    return 0;
}
