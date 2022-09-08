#include <stdio.h>
#include <stdlib.h>

struct date
{
    int d;
    int m;
    int y;
} d1, d2;
typedef struct date dt;

void difference(dt d1, dt d2)
{
    int dd, mm, yy;
    if (d1.m == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        if (d1.d < d2.d)
        {
            d1.d += 31;
            --d1.m;
        }

        dd = d1.d - d2.d;
        if (d1.m < d2.m)
        {
            d1.m += 12;
            --d1.y;
        }

        mm = d1.m - d2.m;
        yy = d1.y - d2.y;
    }

    else if (d1.m == 2 && leap(d1.y) == 0)
    {
        if (d1.d < d2.d)
        {
            d1.d += 28;
            --d1.m;
        }

        dd = d1.d - d2.d;
        if (d1.m < d2.m)
        {
            d1.m += 12;
            --d1.y;
        }

        mm = d1.m - d2.m;
        yy = d1.y - d2.y;
    }

    else if (d1.m == 2 && leap(d1.y) == 1)
    {

        if (d1.d < d2.d)
        {
            d1.d += 29;
            --d1.m;
        }

        dd = d1.d - d2.d;
        if (d1.m < d2.m)
        {
            d1.m += 12;
            --d1.y;
        }

        mm = d1.m - d2.m;
        yy = d1.y - d2.y;
    }

    else
    {
        if (d1.d < d2.d)
        {
            d1.d += 30;
            --d1.m;
        }

        dd = d1.d - d2.d;
        if (d1.m < d2.m)
        {
            d1.m += 12;
            --d1.y;
        }

        mm = d1.m - d2.m;
        yy = d1.y - d2.y;
    }

    printf("\nYour age is -->\n");
    printf("%d years, %d months and %d days", yy, mm, dd);
}

int leap(int year)
{
    if (year % 400 == 0)
    {
        return 1;
    }

    // not a leap year if divisible by 100
    // but not divisible by 400

    else if (year % 100 == 0)
    {
        return 0;
    }

    // leap year if not divisible by 100
    // but divisible by 4

    else if (year % 4 == 0)
    {
        return 1;
    }

    // all other years are not leap years

    else
    {
        return 0;
    }
}

int main()
{
    printf("Enter the present date\n");
    printf("Value of dd : ");
    scanf("%d", &(d1.d));
    printf("Value of mm : ");
    scanf("%d", &(d1.m));
    printf("Value of yyyy : ");
    scanf("%d", &(d1.y));
    printf("\nEnter the birth date\n");
    printf("Value of dd : ");
    scanf("%d", &(d2.d));
    printf("Value of mm : ");
    scanf("%d", &(d2.m));
    printf("Value of yyyy : ");
    scanf("%d", &(d2.y));
    difference(d1, d2);

    return 0;
}
