#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i=1;
    float *marks = (float*)malloc(1*sizeof(int));

    float max=0;
    while(1){

        printf("Student_%d marks : ",i);
        scanf("%f",&*marks);

        if(*marks>max){
            max=*marks;
            printf("The topper is Student_%d with marks : %.3f",i,max);
        }
        else printf("The topper is Student_%d with marks : %.3f",i-1,max);

        free(marks);
        float *marks = (float*)malloc(1*sizeof(int));
        ++i;

        printf("\n\nPress 0 to exit... ");
        int input;
        scanf("%d",&input);

        if(input==0) break;
    }

    return 3;
}
