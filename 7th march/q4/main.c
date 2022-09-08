#include <stdio.h>
#include <stdlib.h>

int i;

struct input
{
    float rl;
    float cmp;
}n1,n2;
typedef struct input in;

void division(in n1,in n2)
{
    float real,imaginary;
    real=((n1.rl*n2.rl)+(n1.cmp*n2.cmp))/((n2.rl*n2.rl)+(n2.cmp*n2.cmp));
    imaginary=((n1.cmp*n2.rl)-(n1.rl*n2.cmp))/((n2.rl*n2.rl)+(n2.cmp*n2.cmp));
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\nResult after division : %.3f + %.3fi  \n",real,imaginary);
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\n");
}

void multiply(in n1,in n2)
{
    float real,imaginary;
    real=((n1.rl*n2.rl)-(n1.cmp*n2.cmp));
    imaginary=((n1.rl*n2.cmp)+(n1.cmp*n2.rl));
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\nResult after multiplication : %.3f + %.3fi   \n",real,imaginary);
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\n");
}

void add(in n1,in n2)
{
    float real,imaginary;
    real=n1.rl+n2.rl;
    imaginary=n1.cmp+n2.cmp;
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\nResult after addition : %.3f + %.3fi    \n",real,imaginary);
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\n");
}

void subtract(in n1,in n2)
{
    float real,imaginary;
    real=n1.rl-n2.rl;
    imaginary=n1.cmp-n2.cmp;
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\nResult after subtraction : %.3f + %.3fi   \n",real,imaginary);
    for(i=0;i<=10;++i){
        printf("----");
    }
    printf("\n");
}

int main()
{
    char smb;
    printf("Enter the values for complex numbers --> \n\n");
    printf("R1 : ");
    scanf("%f",&n1.rl);
    printf("I1 : ");
    scanf("%f",&n1.cmp);
    printf("\n");
    printf("R2 : ");
    scanf("%f",&n2.rl);
    printf("I2 : ");
    scanf("%f",&n2.cmp);

Label:
    printf("\nPress '/', '*', '+', '-' for respective operations & 0 for exit\n");

Label1:
    scanf("%s",&smb);

    switch (smb)
    {
        case '/' :
           {
            division(n1,n2);
            goto Label;
            break;
           }
        case '*' :
            multiply(n1,n2);
            goto Label;
            break;
        case '+' :
            {
            add(n1,n2);
            goto Label;
            break;
            }
        case '-' :
            {
            subtract(n1,n2);
            goto Label;
            break;
            }
        case '0':
            {
                break;
            }
        default :
            {
            printf("\nINVALID INPUT\nENTER AGAIN : ");
            goto Label1;
            }
    }


    return 3;
}
