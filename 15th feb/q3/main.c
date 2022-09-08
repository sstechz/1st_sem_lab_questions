#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float D,p,q;
    //printf("Enter values of the coefficient a,b,c respectively --> ");
    scanf("%d %d %d",&a,&b,&c);
    //printf("The equation is %dx2 + %dx + %d = 0\n",a,b,c);
    D=(b*b)-(4*a*c);
    if(D>=0){
        p = (-b+pow(D,0.5))/(2.0*a);
        q = (-b-pow(D,0.5))/(2.0*a);
        if(p==q){
            printf("The roots are real-and-equal.\n");
            printf("They are: (%f) each.",p);
        }
        else{
            printf("The roots are real-and-distinct.\n");
            printf("They are: (%f) and (%f)",p,q);
        }
    }
    else{
        printf("The roots are imaginary.\n");
        printf("They are: (%f) + (%f)i and (%f) - (%f)i",-b/(2.0*a),(pow(-D,0.5))/(2*a),-b/(2.0*a),(pow(-D,0.5))/(2*a));
    }
    return 3;
}
