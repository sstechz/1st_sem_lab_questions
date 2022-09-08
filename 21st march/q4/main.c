#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    FILE *f1,*f2;
    char details[30];

    f1=fopen("original.txt","w");

    //taking input from the console and printing it to the file

    printf("Enter the details ...\nAnd press 0 to exit...\n");

    for(i=0;i<30;++i){
        scanf("%c",&details[i]);
        if(details[i]!='0'){
            fprintf(f1,"%c",details[i]);
        }
        else{
            break;
        }
    }
    fclose(f1);

    f1=fopen("original.txt","r");
    f2=fopen("copied.txt","w");

    //copying the data of file 1 to file 2
    j=0;
    while(!feof(f1)&(j<i-1)){           /*here j<i-1 is used to remove the 0 from the copied file*/
        fscanf(f1,"%c",&details[j]);
        fprintf(f2,"%c",details[j]);
        ++j;
    }
    fclose(f1);
    fclose(f2);

    printf("\nThe data inside the file 2 (ie the copied file is)...\n");
    f2=fopen("copied.txt","r");

    i=0;
    while(!feof(f2)){
        fscanf(f2,"%c",&details[i]);
        printf("%c",details[i]);
        ++i;
    }
    fclose(f2);

    return 3;
}
