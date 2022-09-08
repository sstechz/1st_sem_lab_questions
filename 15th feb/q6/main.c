#include <stdio.h>
#include <stdlib.h>

int fact(int a)
{
    if(a==0||a==1) return 1;
    else return a*fact(a-1);
}
int main()
{
    int num;
    printf("Enter the number --> ");
    scanf("%d",&num);
    int product=1;
    if(num!=0){
        for(int i=1;i<=num;++i){
            product*=i;
        }
        printf("Factorial by simple function is %d.\n",product);
    }
    else printf("Factorial by simple function is 1.\n");
    printf("Factorial by recursion is %d.",fact(num));

    return 3;
}
