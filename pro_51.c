#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,tc,len_1,len_2;
    char str1[128],str2[128];

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%s %s", str1, str2);

        len_1=strlen(str1);
        len_2=strlen(str2);

        for(i=0; i<=len_1-len_2; i++)
        {
            if(str2[0]==str1[i])
            {
                for(j=1; j<len_2; j++)
                {
                    if(str2[j]!=str1[i+j])
                    {
                        break;
                    }
                }

                if(j==len_2)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }



    return 0;
}
