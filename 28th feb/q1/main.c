#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[60];
    printf("Enter the string containing chars with UC and LC ,digits,symbols\n");
    gets (line);
    char *p=line;

    //NO. OF CHARACTERS
//    printf("\nThe number of characters in the string is : %d\n",strlen(p));
    int count=0;
    for(int i=0;i<60;++i){
        if(*(p+i)=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    int character=count;
    printf("\nThe number of characters in the string is : %d\n",character);

    //COUNTING NO OF WORDS
    count=0;
    for(int i=0;i<strlen(p);++i){
        if(*(p+i)==' ') count++; /*counting no of spaces*/
    }
    int word = count +1;
    printf("\nThe number of words in the string is : %d\n",word); /*words = no. of spaces + 1*/

    //COUNTING UPPER CASE LETTER(65-->90)
    count=0;
    for(int i=0;i<strlen(p);++i){
        for(int j=65;j<=90;++j){
            if(*(p+i)==j)
                count++;
        }
    }
    int uc=count;
    printf("\nThe number of upper case letters in the string is : %d\n",uc);

    //COUNTING LOWER CASE LETTER(97-->122)
    count =0;
    for(int i=0;i<strlen(p);++i){
        for(int j=97;j<=122;++j){
            if(*(p+i)==j) count++;
        }
    }
    int lc=count;
    printf("\nThe number of lower case letters in the string is : %d\n",lc);

    //COUNTING DIGITS
    count=0;
//    char a='0';
    for(int i=0;i<strlen(p);++i){
        for(char a='0';a<='9';++a){
            if(*(p+i)==a)
                count++;
        }
    }
    int digit=count;
    printf("\nThe number of digits in the string is : %d\n",digit);

    //COUNTING SYMBOLS
    printf("\nThe number of symbols in the string is : %d\n",(strlen(p)-(uc+lc+digit+(word-1))));

    return 3;
}


