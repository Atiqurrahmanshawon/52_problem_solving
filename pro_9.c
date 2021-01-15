#include<stdio.h>
#include<math.h>

int main()
{
    int tc,i,n,sq_root;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%d", &n);

        sq_root=sqrt(n);

        if(sq_root*sq_root == n)
        {
            printf("YES\n");
        }
        else
            {
                printf("NO\n");
            }
    }


    return 0;
}
