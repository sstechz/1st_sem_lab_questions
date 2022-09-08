#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k;

    FILE *fp;
    char id[10];
    char name[15];
    char branch[4];
    char grade[4];

    int num;
    printf("Enter the no of records you want to enter : ");
    scanf("%d",&num);

    fp=fopen("STUDENT.txt","w");

    //loop for taking in data to the file from the console
    for(i=0;i<num;++i){
        printf("ID : ");
        scanf("%s",id);
        fprintf(fp,"%s ",id);

        printf("NAME : ");
        fflush(stdin);
        gets(name);
        //scanf("%s",name);
        fprintf(fp,"%s ",name);

        printf("BRANCH : ");
        scanf("%s",branch);
        fprintf(fp,"%s ",branch);

        printf("GRADE : ");
        scanf("%s",grade);
        fprintf(fp,"%s\n",grade);
        //  \n for printing from the nxt line

        printf("\n");
    }
    fclose(fp);

    fp=fopen("STUDENT.txt","r");

    printf("\nID NAME BRANCH GRADE\n");

    //loop for taking the data from the file and printing it to the console
    for(i=0;i<num;++i){
        fscanf(fp,"%s ",&id);
        printf("%s ",id);

        fscanf(fp,"%s ",&name);
        printf("%s ",name);

        fscanf(fp,"%s ",&branch);
        printf("%s ",branch);

        fscanf(fp,"%s ",&grade);
        printf("%s ",grade);
        printf("\n");
    }
        fclose(fp);

    return 3;
}
