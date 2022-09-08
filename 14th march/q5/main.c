#include <stdio.h>
#include <stdlib.h>

void dist(float u,float a,int t)
{
    if(t!=0){
        float x2 = (u*t) + (1/2.0)*a*t*t;
        float x1 = (u*(t-1)) + (1/2.0)*a*(t-1)*(t-1);
        printf("d = %.3f, ",x2-x1);
        printf("Total distance covered : %.3f\n",x2);
    }
    else{
        float x = (u*t) + (1/2.0)*a*t*t;
        printf("d = %.3f, ",x);
        printf("Total distance covered : %.3f\n",x);
    }

}

void vel(float u,float a,int t)
{
    u = u + a*(t);
    printf("u = %.3f, ",u);
}

int main()
{
    int time;
    printf("Enter the time duration (in sec) : ");
    scanf("%d",&time);

    float velocity;
    printf("Enter the value of initial velocity (in m/s) : ");
    scanf("%f",&velocity);

    float accelaration;
    printf("Enter the value of accelaration (in m/s^2) : ");
    scanf("%f",&accelaration);
    printf("\n\n");

    float distance;
    float *ptr=&distance;
    float *ptr_2=&velocity;
    for(int i=0;i<time;++i){
        printf("At time t = %dsec, ",i);
        vel(velocity,accelaration,i);
        dist(velocity,accelaration,i);
    }
    printf("\n\n");

    return 3;
}
