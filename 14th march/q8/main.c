#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k;
    int div_2=0,div_3=0,div_4=0,div_5=0,div_6=0,div_8=0,div_9=0,div_10=0,div_11=0;
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int temp=num;
    int sum=0;
    int rem;
    while(temp!=0){
        rem=temp%10;
        temp=temp/10;
        sum+=rem;
    }

    if(num%2==0){
        div_2 = 1;
        printf("The number is divisible by 2\n");
    }

    if(sum%3==0){
        div_3=1;
        printf("The number is divisible by 3\n");
    }

    /*last two digits must be divisible by 4*/
    if((num%100)%4==0){
        div_4=1;
        printf("The number is divisible by 4\n");
    }

    if(num%5==0){
        div_5=1;
        printf("The number is divisible by 5\n");
    }

    if((div_2==1)&&(div_3==1)){
        div_6=1;
        printf("The number is divisible by 6\n");
    }

    /*last 3 digits must be divisible by 8*/
    if((num%1000)%8==0){
        div_8=1;
        printf("The number is divisible by 8\n");
    }

    if(sum%9==0){
        div_9=1;
        printf("The number is divisible by 9\n");
    }

    if((div_2==1)&&(div_5==1)){
        div_10=1;
        printf("The number is divisible by 10\n");
    }

    int no=0;
    sum=0;
    while(num!=0){
        ++no;
        rem=num%10;
        num=num/10;
        sum+=pow(-1,no)*rem;
    }

    if(sum==0||sum%11==0){
        printf("The number is divisible by 11\n");
    }

    return 3;
}
