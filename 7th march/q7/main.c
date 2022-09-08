#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int i,j;

struct vertex
{
    float x1,x2,x3,y1,y2,y3;
}v;
typedef struct vertex ver;

float distance(float a,float b,float m,float n)
{

    float dis = sqrt(((float)pow((a-b),2)+(float)pow((m-n),2)));
    return dis;
}

//TYPES OF TRIANGLE ON BASIS OF SIDES
void triangle(float a,float b,float c)
{
    if(a==b||b==c||c==a){
        if(a==b && b==c) printf("\n||EQUILATERAL TRIANGLE||\n");
        else printf("\n||ISOSCELES TRIANGLE||\n");
    }
    else printf("\n||SCALENE TRIANGLE||\n");
}

//TYPES OF TRIANGLE ON BASIS OF ANGLES
void angle(float a,float b,float c)
{
    if((a<90)&&(b<90)&&(c<90)) printf("||ACUTE ANGLED TRIANGLE||\n");
    if((a==90.000000)||(b==90.000000)||(c==90.000000)){
        printf("||RIGHT ANGLED TRIANGLE||\n");
    }
    else if((a>90)||(b>90)||(c>90)) printf("||OBTUSE ANGLED TRIANGLE||\n");
}

int main()
{
    printf("Finding the type of triangle ---\n");
    for(i=0;i<30;++i){
        printf("--");
    }
    printf("\n");

    printf("Enter the value of the vertex of the triangle -->\n");
label:
    printf("X1 : ");
    scanf("%f",&v.x1);
    printf("X2 : ");
    scanf("%f",&v.x2);
    printf("X3 : ");
    scanf("%f",&v.x3);

    for(i=0;i<30;++i){
        printf("--");
    }
    printf("\n");

    printf("Y1 : ");
    scanf("%f",&v.y1);
    printf("Y2 : ");
    scanf("%f",&v.y2);
    printf("Y3 : ");
    scanf("%f",&v.y3);


    // triangle(v.x1,v.x2,v.x3,v.y1,v.y2,v.y3);
    float s1 = distance(v.x1,v.x2,v.y1,v.y2);
    float s2 = distance(v.x2,v.x3,v.y2,v.y3);
    float s3 = distance(v.x3,v.x1,v.y3,v.y1);

    float max = s1;
    if(s2>max) max=s2;
    if(s3>max) max=s3;

    //INVALID IF ANY SIDE LENGTH IS 0
    if(s1==0 || s2==0 || s3==0){
        printf("\n*INVALID INPUT*\n");
        printf("Enter Again ---\n\n");
        goto label;
    }

    //INVALID IF AREA OF THE TRIANGLE IS 0 OR POINTS ARE COLLINEAR
    float area = (1/2.0)*(abs((v.x1*(v.y2-v.y3)+v.x2*(v.y1-v.y3)+v.x3*(v.y1-v.y2))));
    if(area==0){
        printf("\n*INVALID INPUT*\n");
        printf("Enter Again ---\n\n");
        goto label;
    }

    //CHECKING IF SUM OF TWO SMALLER SIDES OF THE TRIANGLE IS LESS THAN THE LARGEST SIDE OR NOT
    if(max==s1){
        if((s2+s3)<max){
            printf("\n*INVALID INPUT*\n");
            printf("Enter Again ---\n\n");
            goto label;
        }
    }
    else if(max==s2){
        if((s1+s3)<max){
            printf("\n*INVALID INPUT*\n");
            printf("Enter Again ---\n\n");
            goto label;
        }
    }
    else if(max==s3){
        if((s1+s2)<max){
            printf("\n*INVALID INPUT*\n");
            printf("Enter Again ---\n\n");
            goto label;
        }
    }

    //CALCULATION ANGLE USING COSINE LAW
    float A = acos(((s2*s2)+(s3*s3)-(s1*s1))/(2*s2*s3))*(180/3.14159265);
    float B = acos(((s1*s1)+(s3*s3)-(s2*s2))/(2*s1*s3))*(180/3.14159265);
    float C = acos(((s1*s1)+(s2*s2)-(s3*s3))/(2*s2*s1))*(180/3.14159265);

    //PRINTING VALUES OF ANGLES AND SIDES FOR VERIFICATION
    printf("\n%f\n",A);
    printf("%f\n",B);
    printf("%f\n",C);

    printf("\n%f\n",s1);
    printf("%f\n",s2);
    printf("%f\n",s3);


    triangle(s1,s2,s3);
    angle(A,B,C);

    return 3;
}
