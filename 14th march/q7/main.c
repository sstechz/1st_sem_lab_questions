//         @
//        @ @
//       @ @ @
//      @ @ @ @
//     @ @ @ @ @
//    @ @ @ @ @ @
//     @ @ @ @ @
//      @ @ @ @
//       @ @ @
//        @ @
//         @

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    //here rows represents the upper part of the diamond
    printf("Enter the no of rows : ");
    int rows;
    scanf("%d",&rows);

    for(i=0;i<rows;++i){
        //printing the spaces
        for(j=0;j<rows-i;++j){
            printf(" ");
        }
        for(k=0;k<i+1;++k){
            printf("@ ");
        }
        printf("\n");
    }

    //printing the middle part
    for(j=0;j<rows+1;++j){
        printf("@ ");
    }
    printf("\n");

    //printing the lower part
    for(k=0;k<rows;++k){
        //printing the spaces
        for(i=0;i<k+1;++i){
            printf(" ");
        }
        for(j=0;j<rows-k;++j){
            printf("@ ");
        }
        printf("\n");
    }

    return 3;
}
