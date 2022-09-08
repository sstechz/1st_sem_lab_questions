#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[11];
    //printf("Give the input inside the arr[10] and last element as the search element --> ");
    for(int i=0;i<11;++i){
        scanf("%d",&arr[i]);
    }
    int s=arr[10];
    int count=1;
    for(int j=0;j<10;++j){
        if(s==arr[j]){
            printf("%d is first found at the %d-th position.",s,count);
            break;
        }
        ++count;
    }
    if(count==11) printf("%d is not found",s);

    return 3;
}
