#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 3,b = 4;
    double A,B,C;
    double D;

    A = a+b;
    B = a-b;
    C = a*b;
    D = a/b;

    printf("Sum:%lf\n",A);
    printf("Difference:%lf\n",B);
    printf("Product:%lf\n",C);
    printf("Quotient:%lf\n",D);

    return 0;
}
