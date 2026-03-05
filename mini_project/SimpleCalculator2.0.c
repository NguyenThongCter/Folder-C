/*Simple Calculator 2.0 using switch-case*/
#include "stdio.h"
int main(){
          printf("--- Welcome to the Simple Calculator 2.0 by toidicodelai ---\n");
          int a, b;
          char op;
          printf("\nEnter first number a = ");
          scanf("%d", &a);
          printf("Enter op = ");
          scanf(" %c", &op);
          printf("Enter first number b = ");
          scanf("%d", &b);

          switch(op){
                    case '+':
                              printf("%d\n", a + b);
                              break;
                    case '-':
                              printf("%d\n", a - b);
                              break;
                    case '*':
                              printf("%d\n", a * b);
                              break;
                    case '/':
                              if(b==0) printf("Cannot divine by zero!");
                              else     printf("%.2f\n",(float)a / b);
                                        break;
                    default: 
                              printf("Invalid operator, please enter again !!");
          }
}