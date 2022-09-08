#include <stdio.h>
#include <stdlib.h>

struct date{
    int d;
    int m;
    int y;
}d1,d2;
typedef struct date dt;

void difference(dt d1,dt d2)
{
    int dd,mm,yy;

    if(d1.m==1||3||5||7||8||10||12){
        if(d2.m==1||3||5||7||8||10||12){
            if(d1.d<d2.d){
                d1.d+=31;
                --d1.m;
            }
            dd=d1.d-d2.d;

            if(d1.m<d2.m){
                d1.m+=12;
                --d1.y;
            }
            mm=d1.m-d2.m;
            yy=d1.y-d2.y;
        }
    }
    else{
            if(d1.d<d2.d){
                d1.d+=30;
                --d1.m;
            }
            dd=d1.d-d2.d;

            if(d1.m<d2.m){
                d1.m+=12;
                --d1.y;
            }
            mm=d1.m-d2.m;
            yy=d1.y-d2.y;
    }
    printf("\nThe difference of the dates is -->\n");
    printf("%d/%d/%d",dd,mm,yy);

}

int main()
{
    printf("Enter the valid date values inside d1\n");
    printf("Value of dd : ");
    scanf("%d",&(d1.d));
    printf("Value of mm : ");
    scanf("%d",&(d1.m));
    printf("Value of yyyy : ");
    scanf("%d",&(d1.y));

    printf("\nEnter the time values inside d2\n");
    printf("Value of dd : ");
    scanf("%d",&(d2.d));
    printf("Value of mm : ");
    scanf("%d",&(d2.m));
    printf("Value of yyyy : ");
    scanf("%d",&(d2.y));

    difference(d1,d2);

    return 3;
}
