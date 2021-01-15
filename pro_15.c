#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    int tc,i,j,count[26];

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        for(j=0; j<26; j++)
        {
            count[j]=0;
        }
        scanf(" %[^\n]", s);

        for(j=0; j<strlen(s); j++)
        {
            if(s[j]>='a' && s[j]<='z')
            {
                count[s[j]-'a']++;
            }
        }

        for(j=0; j<26; j++)
        {
            if(count[j] != 0)
            {
                printf("%c = %d\n", 'a'+j,count[j]);
            }
        }
    }



    return 0;

}
