#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//USE "Gojo has a god complex, so he beats all." FOR INPUT
int main()
{
    int i,j;
    printf("Enter the string -->\n");
    char line[60];
    gets(line);
    char *p=line;

    printf("\nEnter the substring -->\n");
    char sub[20];
    gets(sub);
    char *q=sub;

    //LOOP FOR FINDING FIRST OCCURENCE OF THE SUBSTRING.
    int times=0;
    int word=1;
    for(i=0;i<strlen(line);++i){
        int count=0;
        if(*(p+i)==' ') word++;
        for(j=0;j<strlen(sub);++j){
            if(*(p+i+j)==*(q+j)) count++;
        }
        if(count==strlen(sub)){
            times++;
            goto label;
        }
    }
    if(times=0){
        printf("\nThe substring was not found.\n");
    }

    label:
    printf("\nThe substring first occured in %dth word.\n",word);


    return 3;
}
