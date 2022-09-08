#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//bubble sort
void sort(char str[], int n)
{
    int i,j;
    for(i=0;i<n-1;++i){
        //after each loop the swapping term decreases by 1
        for(j=0;j<n-i-1;++j){
            if(str[j]>str[j+1]){
                swap(&str[j],&str[j+1]);
            }
        }
    }

}

void swap(char* a, char* b){
    char temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    char str[30];
    printf("Enter a string ...\n");
    gets(str);
    int n=strlen(str);

    sort(str,n);

    printf("The sorted string is ...\n");
    int i;
    for(i=0;i<n;++i){
        //if statement to not to print the spaces
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
    }
    printf("\n");

    return 3;
}
