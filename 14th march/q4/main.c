#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a string --> ");
    char str[30];
    char *ptr=str;
    gets(str);

    printf("Enter the character after which you want to insert : ");
    char after;
    scanf("%c",&after);

    printf("Enter the substring to be inserted --> ");
    char ins[10];
    fflush(stdin);
    gets(ins);

    int i=0;
    while(*(ptr+i)!='\0'){
        if(*(ptr+i)==after){
            printf("%c%s",after,ins);
        }
        else printf("%c",*(ptr+i));
        ++i;
    }
    printf("\n");

    return 3;
}
