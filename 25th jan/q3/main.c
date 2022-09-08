#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p = 1, i = 0;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n!=0)
    {
        do
        {
            i = i+1;
            p = p*i;
        }
        while(i<n);
        printf("Factorial of %d is %d.",n,p);
    }
    else
        printf("Factorial of 0 is 1.");


    return 3;
}
