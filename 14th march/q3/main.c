#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;

    printf("Enter the string...\n");
    char str[30];
    char *ptr=str;
    gets(str);
    int m=strlen(str);

    char del[20];
    printf("Enter a substring to be removed : ");
    gets(del);
    int n=strlen(del);


    for(i=0;i<m-1;++i){
        int count=0;
        for(j=0;j<n;++j){
            if(*(ptr+i+j)==del[j]){
                ++count;
            }
        }
        if(count==n){
            int temp;
            for(int k=i;k<m;k++){
                *(ptr+k)=*(ptr+k+n);
            }
        }
    }
    printf("\n%s\n",str);

    return 3;
}
