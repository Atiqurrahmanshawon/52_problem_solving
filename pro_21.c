#include<stdio.h>

int main()
{
    int tc,i,j;
    char s[1001];

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf(" %[^\n]", s);

        for(j=strlen(s)-1; j>=0; j--)
        {
            printf("%c", s[j]);
        }
    }



    return 0;
}
