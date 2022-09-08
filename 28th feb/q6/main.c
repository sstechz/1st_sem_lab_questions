#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copy(char a1[60],char a2[60])
{
    char a3[60];
    int i;
    for(i=0;a2[i]!='\0';++i){
        a3[i]=a2[i];
    }
    a3[i]='\0';
    printf("\nThe string after applying strcpy function is -->\n");
    printf("%s",a3);
    printf("\n");
}

void cat(char b1[60],char b2[60])
{
    int i=0,j=0;
    char b3[100];
    while(b1[i]!='\0'){
        b3[j]=b1[i];
        i++;
        j++;
    }

    i=0;
    while(b2[i]!='\0'){
        b3[j]=b2[i];
        i++;
        j++;
    }
    b3[j]='\0';
    printf("\nThe string after applying strcpy function is -->\n");
    printf("%s",b3);
    printf("\n");

}

int cmp(char c1[60],char c2[60])
{
    int i=0,j=0,t1=0;
    for(i=0;c1[i]!='\0';++i){
        if(c1[i]==c2[i]){
            t1++;
        }
        else{
            return (c1[i]-c2[i]);
        }
    }
    if(t1==i) return 0;
}

int main()
{
    printf("Enter the line in string 1 -->\n");
    char s1[60];
    gets(s1);

    printf("\nEnter the line in string 2 -->\n");
    char s2[60];
    gets(s2);

    copy(s1,s2);
    cat(s1,s2);
    printf("\nThe string after applying strcmp function is -->\n");
    printf("%d",cmp(s1,s2));
    printf("\n");

    return 3;
}


