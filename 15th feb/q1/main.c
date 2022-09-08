//WAP to print the(LCM) and (HCF)
//of two positive integers.
//Be careful about all exceptional cases.
//Define two separate functions to calculate
//LCM and HCF respectively.
//Input: <n1> <n2>
//Output:
//LCM of <n1> and <n2> is <lcm>.
//HCF of <n1> and <n2> is <hcf>.

//A*B = LCM * HCF

#include <stdio.h>
#include <stdlib.h>


int hcf(int a,int b)
{
    if(a>b)
    {
        int div=b;
        int r=1;
        do{
            r=a%div;
            a=div;
            div=r;
        }
        while(r!=0);
        //TAKE EXAMPLE OF 20 12 TO EXPERIENCE THE FUNCTIONING
        return a;
    }
    else{
        int div2=a;
        int s=1;
        do{
            s=b%div2;
            b=div2;
            div2=s;
        }
        while(s!=0);
        return b;
    }
}

void lcm(int a,int b)
{
    printf("LCM of %d and %d is %d\n",a,b,(a*b)/hcf(a,b));
}

int main()
{
    int a,b;
   // printf("Enter any two numbers : ");
    scanf("%d %d",&a,&b);
    lcm(a,b);
    printf("HCF of %d and %d is %d",a,b,hcf(a,b));

    return 3;
}

