#include<stdio.h>
#include<string.h>

void print_reverse(char str[])
{
    int i,len;
    len=strlen(str);
    for(i=len-1; i>=0; i--)
    {
        printf("%c", str[i]);

    }

}

int main()
{
    char s[1002],word[1002];
    int i,j,k,tc;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf(" %[^\n]", s);

        //printf("%s\n", s);

        for(j=0,k=0; j<strlen(s); j++)
        {
            if(s[j] != ' ')
            {
                word[k]=s[j];
                k++;
            }
            else if(k>0)
            {
                word[k]='\0';
                //printf("%s\n",word);
                print_reverse(word);

                printf(" ");


                k=0;
            }
        }
        if(k>0)
        {
            word[k]='\0';
            print_reverse(word);
            //printf("%s\n",word);

        }
    }


    return 0;
}
