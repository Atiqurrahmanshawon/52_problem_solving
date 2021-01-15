#include<stdio.h>

int main()
{
    int tc,i,j;
    char ch;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%s", &ch);

        if(ch>='A' && ch<='Z')
        {
            printf("Uppercase Character\n");
        }
        else if(ch>='a' && ch<='z')
        {
            printf("Lowercase Character\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }



    return 0;
}
