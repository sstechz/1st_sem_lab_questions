#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prime(int a)
{
    //LOOP CONTINUES TILL a BECOMES AN ODD NUMBER
    while(a%2==0){
        printf("2 ");
        a=a/2;
    }
    for(int i=3;i<=pow(a,0.5);i+=2){
        while(a%i==0){
            printf("%d ",i);
            a=a/i;
        }
    }
    if(a>2) printf("%d ",a);
}
int main()
{
    int num;
    //printf("Enter the number --> ");
    scanf("%d",&num);
    if(num>1){
        printf("The prime factors of %d are:\n",num);
        prime(num);
    }
    else printf("Number should be larger than 1.");

    return 3;
}
