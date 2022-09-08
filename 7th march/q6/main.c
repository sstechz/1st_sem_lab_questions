#include <stdio.h>
#include <stdlib.h>

int i,j;

struct triangle
{
    float s1;
    float s2;
    float s3;
    float a1,a2,a3;
}tr;
typedef struct triangle T;

void sides(float a,float b,float c)
{
    if(a==b==c) printf("EQUILATERAL TRIANGLE\n");
    else if((a==b)||(b==c)||(c==a)) printf("ISOSCELES TRIANGLE\n");
    else printf("SCALANE TRIANGLE\n");
}

void angle(float a,float b,float c)
{
    if((a<90)&&(b<90)&&(c<90)) printf("ACUTE ANGLED TRIANGLE\n");
    if((a==90.000000)||(b==90.000000)||(c==90.000000)){
        printf("RIGHT ANGLED TRIANGLE\n");
        if((a==b)||(b==c)||(c==a)) printf("ISOSCELES TRIANGLE\n");
    }
    else if((a>90)||(b>90)||(c>90)) printf("OBTUSE ANGLED TRIANGLE\n");
}

int main()
{
    printf("Enter the dimensions of a triangle -->\n");
    for(i=0;i<30;++i){
        printf("--");
    }
    printf("\n");
    char sym;
label:
    printf("Press S for sides || Press A for angles : ");
    scanf("%c",&sym);
    if(sym=='s'||sym=='S'){
label1:
        printf("S1 : ");
        scanf("%f",&tr.s1);
        printf("S2 : ");
        scanf("%f",&tr.s2);
        printf("S3 : ");
        scanf("%f",&tr.s3);
        float max=tr.s1;
        if(tr.s2>=max) max=tr.s2;
        if(tr.s3>=max) max=tr.s3;
        if(max==tr.s1){
            if((tr.s2+tr.s3)>max) sides(tr.s1, tr.s2, tr.s3);
            else {
                printf("INVALID SIDES||ENTER AGAIN\n");
                goto label1;
            }
        }
        if(max==tr.s2){
            if((tr.s1+tr.s3)>max) sides(tr.s1, tr.s2, tr.s3);
            else {
                printf("INVALID SIDES||ENTER AGAIN\n");
                goto label1;
            }
        }
        if(max==tr.s3){
            if((tr.s2+tr.s1)>max) sides(tr.s1, tr.s2, tr.s3);
            else {
                printf("INVALID SIDES||ENTER AGAIN\n");
                goto label1;
            }
        }
    }
    else if(sym=='a'||sym=='A'){
label2:
        printf("A1 : ");
        scanf("%f",&tr.a1);
        printf("A2 : ");
        scanf("%f",&tr.a2);
        printf("A3 : ");
        scanf("%f",&tr.a3);
        if((tr.a1+tr.a2+tr.a3)==180.00000) angle(tr.a1,tr.a2,tr.a3);
        else {
            printf("INVALID ANGLES||ENTER AGAIN\n");
            goto label2;
        }
    }
    else{
        printf("|INVALID INPUT||PLZ ENTER AGAIN|\n");
        goto label;
    }

    return 3;
}
