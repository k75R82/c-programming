#include<stdio.h>

int main(){

    char ch;
    printf("enter character :");
    scanf("%c",&ch);

    if(ch>='a'&& ch<='z'){
        printf("entered character is lower case\n");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("Entered character is upper case\n");
    }
    else{
        printf("user enter wrong input\n");

    }
    return 0;
}