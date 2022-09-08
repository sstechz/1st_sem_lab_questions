#include <stdio.h>
#include <stdlib.h>

struct data
{
    int a;
    int b;
}d;

void AND(int m,int n)
{
    if((m&&n)==1) printf("OUTPUT : '1'");
    else printf("OUTPUT : '0'");
}

void OR(int m,int n)
{
    if((m||n)==1) printf("OUTPUT : '1'");
    else printf("OUTPUT : '0'");
}

void NAND(int m,int n)
{
    if((m&&n)==1) printf("OUTPUT : '0'");
    else printf("OUTPUT : '1'");
}

void NOR(int m,int n)
{
    if((m&&n)==0) printf("OUTPUT : '1'");
    else printf("OUTPUT : '0'");
}

void XOR(int m,int n)
{
    if(((m&&n)==0)||((m&&n)==1)) printf("OUTPUT : '0'");
    else printf("OUTPUT : '1'");
}

void XAND(int m,int n)
{
    if(((m&&n)==0)||((m&&n)==1)) printf("OUTPUT : '1'");
    else printf("OUTPUT : '0'");
}

int main()
{
    printf("\nPRINTING VARIOUS LOGIC GATES -->  \n");
    printf("\nPRESS 1 FOR 'AND' GATE\n");
    printf("PRESS 2 FOR 'OR' GATE\n");
    printf("PRESS 3 FOR 'NAND' GATE\n");
    printf("PRESS 4 FOR 'NOR' GATE\n");
    printf("PRESS 5 FOR 'XOR' GATE\n");
    printf("PRESS 6 FOR 'XAND' GATE\n");
    printf("PRESS 7 FOR EXIT\n");
label:
    printf("\n\nEnter your choice : ");
    char input;
    scanf("%s",&input);

    if(input=='7'){
        return 3;
    }

//    if(input!=('1'||'2'||'3'||'4'||'5'||'6'||'7')){
//        goto label2;
//    }
    printf("Number 1 : ");
    scanf("%d",&d.a);
    printf("Number 2 : ");
    scanf("%d",&d.b);

    switch (input)
    {
        case '1':
            {AND(d.a,d.b);
            goto label;
            break;}
        case '2':
            {OR(d.a,d.b);
            goto label;
            break;}
        case '3':
            {NAND(d.a,d.b);
            goto label;
            break;}
        case '4':
            {NOR(d.a,d.b);
            goto label;
            break;}
        case '5':
            {XOR(d.a,d.b);
            goto label;
            break;}
        case '6':
            {XAND(d.a,d.b);
            goto label;
            break;}
        case '7':
            {break;}
//     label2:
        default:
            {printf("//Enter a valid input//");
            goto label;
            break;}
    }

    return 3;
}
