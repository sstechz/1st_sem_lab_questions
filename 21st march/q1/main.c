#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    char c;
    printf("Data Input\n\n");
    f1=fopen("INPUT.txt","w");

    while((c=getchar())!=EOF) putc(c,f1);
    fclose(f1);

    printf("Data Output\n\n");

    f1=fopen("INPUT.txt","r");

    while((c=getc(f1))!=EOF) printf("%c",c);

    fclose(f1);

    return 3;
}
