#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//USE "Gojo has a god complex, so he beats all." FOR INPUT
int main()
{
    int i,j;
    char line[60];
    printf("Enter a string of characters -->\n");
    gets(line);
    char *p=line;
    printf("\nEnter the character to be deleted : \n");
    char ch;
    ch=getchar();

    //SEARCHING THE FIRST OCCURENCE OF CHARACTER CH IN THE STRING
    for(i=0;i<strlen(line);++i){
        if(line[i]==ch){
            for(j=i;j<strlen(line);++j){
                *(p+j)=*(p+j+1);/*shifting and deleting array elements*/
            }
            break;
        }
    }

    printf("\nThe string after deleting the first occurence of %c is -->\n",ch);
    puts(line);

    return 3;
}
