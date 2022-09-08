#include <stdio.h>
#include <stdlib.h>

int main()
{
//HERE n & r ARE USED FOR CALCULATION OF nCr .....
//PRODUCT REPRESENTS n!
//PRODUCT2 REPRESENTS r!
//PRODUCT3 REPRESENTS (n-r)!

    int n, r;

    int product=1;
    int product2=1;
    int product3=1;
    int user;
    printf("Enter the number : ");
    scanf("%d",&user);

    for(int row = 1; row <= user; ++row)
    {
        n = row - 1;
        for(int column = 1; column <= row; ++column)
        {
            r = column - 1;
            int max = (n-r);

            // HERE IF-ELSE USED FOR FINDING FACTORIAL IN TERMS OF PRODUCT 1/2/3 ....

            if(n = 0)
                 product = 1;
            else
                {   for(int i = 1; i <= n;)
                    {
                        product = product*i;
                        i = i + 1;
                    }
                }

            if(r = 0)
                product2 = 1;
            else
                {
                    for(int j =1; j <= r;)
                    {
                        product2 = product2*j;
                        j = j + 1;
                    }
                }

            if(max = 0)
                product3 = 1;
            else
                {
                    for(int k = 1; k <= max;)
                    {
                        product3 = product3*k;
                        k = k + 1;
                    }
                }

            int output = product/(product2 * product3);
            printf(" %d ",output);
        }
        //INNER FOR LOOP ENDS

        printf("\n");
    }

    return 3;
}


