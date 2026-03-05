/*ATM Banking System */
#include "stdio.h"
int main(){
          printf("---With Todicodelai build program ATM Banking System!!--");
          // Starting balance
          double balanced = 100000.0;
          double amount = 0;
          printf("---ATM BANKING SYSTEM MENU---\n");
          printf("1. Check Balanced\n");
          printf("2. Deposit Money\n");
          printf("3. Withdraw Money\n");
          printf("4. Exit\n");

          int choice;
          printf("\nPlease choice (1 2 3): ");
          scanf("%d", &choice);

          switch(choice){
                    case 1: 
                              printf("Your balanced: %lf", balanced);
                              break;
                    case 2:
                              printf("Enter amount to deposit: ");
                              scanf("%lf", &amount);
                              if(amount > 0){
                                        balanced += amount;
                                        printf("Deposit successfull !! New balance: %.2f\n", balanced);
                              }else{
                                        printf("Invalid amount!\n");
                              }
                              break;
                    case 3: 
                              printf("\nEnter amount to withdraw: ");
                              scanf("%lf", amount);
                              if(amount > 0 && balanced >= amount){
                                        balanced -= amount;
                                        printf("Withdrawal successful");
                              }else{
                                        printf("Check amount again!!");
                              }
                              break;
                    case 4:  
                              printf("\nEXIT, thankyou for using our systems");
                              break;
                    default: 
                              printf("Invalid choice. Please try again!\n");
          }

}