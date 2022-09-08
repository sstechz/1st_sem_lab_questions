#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter a string -->\n");
    char line[60];
    gets(line);
    char *p=line;

    printf("\nReverse of the string is -->\n");
    for(i=1;i<=strlen(line);++i){ /*TAKE PRECAUTION FOR NULL CHARACTER*/
        printf("%c",*(p+strlen(line)-i));
    }
    printf("\n");

    //CHECKING FOR PALINDROME
    int count=0;
    for(i=0;i<strlen(line);++i){
        if(*(p+i)==*(p+strlen(line)-i-1)) count++; /*INTRODUCED -1 IN INDEX ONLY DUE TO NULL CHARACTER*/
    }

    if(count==strlen(line))
        printf("\nThe given string is a palindrome.\n");
    else
        printf("\nThe given string is not a palindrome.\n");

    return 3;
}
