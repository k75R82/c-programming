#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter numbers :");
        scanf("%d",&n);
        printf("%d\n",n);

    if(n%7==0){
        break;
    }

    }
    while(1);
    printf("Thanku");

    return 0;
}
