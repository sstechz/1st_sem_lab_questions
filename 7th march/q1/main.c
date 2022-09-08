#include <stdio.h>
#include <stdlib.h>

struct time{
    int h;
    int m;
    int s;
}t1,t2;
typedef struct time t;

void difference(t t1,t t2)
{
    int h,m,s;

    if(t1.s<t2.s){
        --t1.m;
        t1.s+=60;
    }
    s=t1.s-t2.s;

    if(t1.m<t2.m){
        --t1.h;
        t1.m+=60;
    }
    m=t1.m-t2.m;
    h=t1.h-t2.h;
    printf("\nThe difference of the two timelines is -->\n");
    printf("%d:%d:%d",h,m,s);
}

int main()
{
    int i,j;
    printf("Enter the valid time values inside t1\n");
    printf("Value of h1 : ");
    scanf("%d",&(t1.h));
    printf("Value of m1 : ");
    scanf("%d",&(t1.m));
    printf("Value of s1 : ");
    scanf("%d",&(t1.s));

    printf("\nEnter the time values inside t2\n");
    printf("Value of h2 : ");
    scanf("%d",&(t2.h));
    printf("Value of m2 : ");
    scanf("%d",&(t2.m));
    printf("Value of s2 : ");
    scanf("%d",&(t2.s));

    difference(t1,t2);

    return 3;
}
