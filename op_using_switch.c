#include<stdio.h>
#include<math.h>

int main()
{

char ch;
int first,second;
printf("Enter operations (+,-,*,/) :\n");
scanf("%c",&ch);
printf("Enter operands\n");
scanf("%d%d",&first,&second);
switch(ch) {
    case'+':
      printf("The addition of two number is %d + %d = %d",first ,second ,first+second);
      break;
    case'-':
      printf("the subtraction is %d - %d = %d",first,second,first-second);
      break;
    case'*':
      printf("the multiplication is %d * %d = %d", first, second ,first*second);
      break;
    case'/':
      printf("the division is %d / %d = %d",first,second,first/second);
      break;
    default :
      printf("wrong input");
      return 0;
}

}

      