#include<stdio.h>

int main()
{
    int i,count = 0;

    for(i=1000; i>=1;)
    {
        printf("%d\t",i--);

        if(i%5==0)
        {
            printf("\n");
        }


    }

    //--------OR--------

    /*for(i=1000; i >= 1; i--)
    {
        if(count==5)
        {
            printf("\n");
            count = 0;
        }

        printf("%d\t",i);
        count=count + 1;
    }*/


    return 0;
}
