#include<stdio.h>

int main()
{
    int tc,i,j;
    char s[1000];

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
{
    scanf(" %[^\n]", s);

        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                printf("%c", s[j]);
            }
        }

        printf("\n");

        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u' && s[j]!=' ')

            {
                printf("%c", s[j]);
            }
        }
    }



    return 0;
}
