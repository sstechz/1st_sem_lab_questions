#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    printf("Enter a number : ");
label_2:
    scanf("%d",&num);

    int temp=num;
    int temp_2=num;
    int digit=0;
    while(temp!=0){
        temp=temp/10;
        ++digit;
    }
    if(num==0) printf("Zero");

    //**IMPORTANT PART IS HOW TO INITIALIZE STRING INSIDE ARRAY**//
    char *ones[]={"Zero","one","two","three","four","five","six","seven","eight","nine"};
    char *two[]={"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char *tens[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

    switch (digit)
    {
        case 1:
            if(num!=0){
                //**HAVE A LOOK AT THE PRINTING SYNTAX**//
                //HERE *ones[num] IS NOT USED//
                printf("%s\n",ones[num]);
            }
            break;

        case 2:
        label:
            if(num<20){
                printf("%s",two[num%10]);
            }
            else if(num%10==0){
                printf("%s",tens[num/10]);
            }
            else{
                printf("%s %s",tens[num/10],ones[num%10]);
            }
            //reinitializing value of num
            num=temp_2;
            break;

        case 3:
            if(num!=100){
                printf("%s hundred ",ones[num/100]);
                //value of num is being changed
                num=num%100;
                goto label;
            }
            else printf("One Hundred");
            break;

        default:
            printf("Please enter a valid input...\n");
            goto label_2;
            break;
    }

    return 3;
}
