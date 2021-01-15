#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,tc;
    char s1[1001],s2[1001];

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%s", s1);

        for(i=strlen(s1)-1,j=0; i>=0; i--,j++)
        {
            s2[j]=s1[i];
        }

        if(strcmp(s1,s2)==0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not Palindrome!\n");
        }

    }


    return 0;
}
