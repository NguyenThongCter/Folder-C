/*Today we let build programs SMART CALCULATOR 2.0 */
#include "stdio.h"
#include "math.h"
int main(){
          printf("Let together build SMART CALCUTOR with Toidicodelai !!!");
          // Declare a variable
          float a, b;
          char choice;

          //input
          printf("\nEnter char operator: ");
          scanf(" %c", &choice);
          printf("\nEnter number a = ");
          scanf("%f", &a);
          // If is here to use when user not input from keyboard Square root
          if(choice != 's'){
                    printf("\nEnter number b = ");
                    scanf("%f", &b);
          }

          // logic 
          if(choice == '+'){
                    printf("Result: %.2f", a + b);
          }else if(choice == '-'){
                    printf("\nResult: %.2f", a - b);
          }else if(choice == '*'){
                    printf("\nResult: %.2f", a * b);
          }else if(choice =='/'){
                    if(b == 0){
                              printf("\nCannot divide by zero!!");
                    }else{
                              printf("\nResult: %.2f", a / b);
                    }
          }else if(choice == 's'){
                    if(a < 0){
                              printf("\nError: Negative number!");
                    }else{
                              printf("\nResult: %.2f", sqrt(a));
                    }
          }else{
                    printf("\nInvalid operator!!");
          }

}