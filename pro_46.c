#include<stdio.h>
#include<math.h>

int main()
{
    int tc,a,b,c;
    double s,area;

    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d %d %d", &a, &b, &c);

        s=((a+b+c)/2);

        area=sqrt(s*(s-a)*(s-b)*(s-c));

        printf("Area = %0.3lf\n", area);
    }



    return 0;
}
