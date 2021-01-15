#include<stdio.h>
#include<string.h>

int main()
{
    char first_line[10001],ch;
    int tc,i,j,count;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        count = 0;
        scanf(" %[^\n]", first_line);
        scanf(" %c", &ch);

        for(j=0; j<strlen(first_line); j++)
        {
            if(ch==first_line[j])
            {
                count++;
            }
        }
        if(count != 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", ch,first_line,count);
        }
        else
        {
            printf("'%c' is not present\n", ch);
        }

    }


    return;
}
