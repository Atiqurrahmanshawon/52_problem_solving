#include<stdio.h>

int main()
{
    int number, hour;
    double total_money, per_hour_money;

    scanf("%d %d %lf", &number, &hour, &per_hour_money);

    total_money=(hour*per_hour_money);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", total_money);


    return 0;
}
