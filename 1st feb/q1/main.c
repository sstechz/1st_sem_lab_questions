#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Initial value of elements are -->\n");

    for(int i = 0; i<10; ++i)
        printf("A[%d] = %d\n",i,A[i]);

    for(int j = 10; j>6; --j)
    {
        A[j] = A[j-1];
    }

    A[6] = A[5];

    printf("\nEnter the index of the element to be inserted in between : ");
    scanf("%d",&A[5]);

    printf("The final output is -->\n");
    for(int k = 0; k<11; ++k)
    {
        printf("A[%d] = %d\n",k,A[k]);
    }

    return 3;
}


int main()
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Initial value of elements are -->\n");

    int index;

    for(int i = 0; i<10; ++i)
        printf("A[%d] = %d\n",i,A[i]);

    printf("\nEnter the no of index of the element to be removed : ");
    scanf("%d",&index);

    for(int j = index; j<10; ++j)
        A[j] = A[j+1];

    printf("The final output is -->\n");
    for(int k = 0; k<9; ++k)
        printf("A[%d] = %d\n",k,A[k]);

    return 3;
}
