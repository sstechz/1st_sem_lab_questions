#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char i[20];
    char j[21];

    FILE *f1;
    f1 = fopen("Q.5a.txt", "w");

    char c[20];
    printf("Enter any string for file1: ");

    gets(c);
    fprintf(f1, "%s", c);
    fclose(f1);

    f1 = fopen("Q.5a.txt", "r");

    fgets(c, 20, f1);
    printf("Entered string for file1 : ");
    puts(c);
    fclose(f1);

    FILE *f2;
    f2 = fopen("Q.5b.txt", "w");

    char ch[21];
    printf("Enter any string for file 2: ");
    gets(ch);
    fprintf(f2, "%s", ch);

    fclose(f2);

    f2 = fopen("Q.5b.txt", "r");

    fgets(ch, 21, f2);
    printf("Entered string for file2 : ");
    puts(ch);

    fclose(f2);

    f1 = fopen("Q.5a.txt", "r");
    f2 = fopen("Q.5b.txt", "r");

    strcpy(i, fgets(c, 20, f1));
    puts(i);

    strcpy(j, fgets(ch, 21, f2));
    puts(j);

    if (!strcmp(i, j))
        printf("Two files are equal");
    else
        printf("Two files are not equal");

    return 3;
}
