#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//USE "Gojo has a god complex, so he beats all." FOR INPUT
int main()
{
    int i,j;
    printf("Enter a string of characters -->\n");
    char line[60];
    gets(line);
    char *p=line;

    //HERE WE NEED TO REMOVE ALL THE SPACES FROM THE STRING
    for(i=0;i<strlen(line);++i){
        if(isspace(*(p+i))){
            for(j=i;j<strlen(line);++j){
                *(p+j)=*(p+j+1);
            }
        }
    }
    printf("\nThe string after removing all the whitespaces is -->\n");
    puts(line);

    return 3;
}
