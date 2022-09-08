#include <stdio.h>
#include <stdlib.h>

int reverse(int a)
{
    int b=a;
    int result=0,q,r;
    do{
        q = a/10;
        r = a%10;
        result = (result*10) + r;
        a=a/10;
    }
    while(q!=0);
    printf("Reversed number is %d.\n",result);
    if(b==result) printf("%d is a palindrome.",b);
    else printf("%d is not a palindrome.",b);

    return 0;
}

int main()
{
    int num=0;
    printf("Enter any number --> ");
    scanf("%d",&num);
    reverse(num);

    return 3;
}
