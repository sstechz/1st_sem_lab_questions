#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number, power, count = 0, product = 1;
    printf("Enter the number & power : ");
    scanf("%d %d",&number,&power);

    do
        {
            count = count + 1;
            product = product*number;
        }
    while(count<abs(power));

    if(power<0)
        printf("%d raised to %d is 1/%d",number,power,product);
    else if(power>0)
        printf("%d raised to %d is %d",number,power,product);
    else if(power==0)
        printf("%d raised to 0 is 1",number);

    return 3;
}
