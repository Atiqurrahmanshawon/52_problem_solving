#include<stdio.h>

int main()
{
    int tc,i,j,count;
    char s[1001];

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        count=0;
        scanf(" %[^\n]", s);

        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[i]=='u')
            {
                count++;
            }
        }

        printf("Number of vowels = %d\n",count);
    }



    return 0;
}
