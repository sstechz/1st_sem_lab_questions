#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2,*f3;
    int num,number,i;
    printf("Enter how many entries : ");
    scanf("%d",&num);
    printf("Contents of DATA file : ");
    f1=fopen("DATA.txt","w");
    for(i=1;i<=num;i++)
    {
        scanf("%d",&number);
        if(number==-1) break;

        //here putw is not reflecting the number in txt file
        //thus used fprintf
        fprintf(f1,"%d ",number);
    }
    fclose(f1);

    f1=fopen("DATA.txt","r");
    f2=fopen("ODD.txt","w");
    f3=fopen("EVEN.txt","w");


    for(i=1;i<=num;i++)
    {
        fscanf(f1,"%d",&number);
        if(number%2==0)
            //*importance of space is that it helps in distinguishing between numbers*
            //if we don't use space then the single no. will be stored in either EVEN.txt or ODD.txt file
            fprintf(f3," %d",number);
        else
            fprintf(f2," %d",number);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    f3=fopen("EVEN.txt","r");
    f2=fopen("ODD.txt","r");

    printf("Contents of ODD file : ");
    //this loop works till the eof is reached
     while(!feof(f2)){
        //read from the file
        fscanf(f2,"%d",&number);

        //print to the console
       fprintf(stdout,"%d ",number);
        //printf("%d",number);
    }
    printf("\n\n");

    printf("Contents of EVEN file : ");
    while(!feof(f3)){
        //read from the file
        fscanf(f3,"%d",&number);

        //print to the console
       fprintf(stdout,"%d ",number);
        //printf("%d",number);
    }
    printf("\n\n");

    fclose(f2);
    fclose(f3);

    return 3;
}
