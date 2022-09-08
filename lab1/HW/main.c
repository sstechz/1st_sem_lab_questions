#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s1,s2,s3,s4,s5,s,a,avg,b,c;

    printf("enter marks of subject1:");
    scanf("%lf",&s1);

    printf("enter marks of subject2:");
    scanf("%lf",&s2);

    printf("enter marks of subject3:");
    scanf("%lf",&s3);

    printf("enter marks of subject4:");
    scanf("%lf",&s4);

    printf("enter marks of subject5:");
    scanf("%lf",&s5);

    printf("enter the total marks in all the five subjects:");
    scanf("%lf",&s);

    a=s1+s2+s3+s4+s5;
    avg=a/5;
    b=a*100;
    c=b/s;

    printf("Average marks is:%lf\n",avg);
    printf("Percentage obtained is:%lf\n",c);

    return 0;

}
