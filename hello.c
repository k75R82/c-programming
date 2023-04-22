#include<stdio.h>

int main()

{
    int a,b,c;

    char ch;

    printf("####Enter the operator which you perform ####\n");
    scanf("%c",&ch);
    printf("##### Enter the value of operand a and b ####\n");
    scanf("%d %d",&a,&b);
    if(ch=='+'){
        c=a+b;
        printf("additon of a and b = %d",c);
    }
    else if(ch=='-')
    {
     c=a-b;
        printf("subtraction of a and b = %d",c);
    }
    else if(ch=='*'){
        c=a*b;
        printf("Multiplication of a and b = %d",c);
    }
    else if(ch=='/'){
        c=a/b;
        printf("division of a and b = %d",c);
    }
    else{ 
        printf("user enter wrong input ");
    }
  
} 