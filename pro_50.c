#include<stdio.h>

int main()
{
    int i,tc;
    char str[51];

    scanf("%d", &tc);

    while(tc--)
    {
        scanf(" %[^\n]", str);

        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]=='L')
            {
                str[i]=str[i-1];
            }
            if(str[i]=='R')
            {
                str[i]=str[i+1];
            }
        }

        printf("%s", str);

        if(tc!=0)
        {
            printf("\n");
        }
    }


    return 0;
}
