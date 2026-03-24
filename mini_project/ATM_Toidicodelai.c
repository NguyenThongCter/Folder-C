#include "stdio.h"
int main(){
          printf("--- Welcome to Toidicodelai's ATM System ---\n");
          int correct_pin = 123456;
          int input_pin;
          int choice, balance = 1000, attempts = 0;
          
          //Dùng while cho nhập ít nhất 3 lần nếu không bị khóa
          while(attempts < 3){
                    printf("\nEnter PIN: ");
                    scanf("%d", &input_pin);

                    if (input_pin == correct_pin) {
                              printf("Login Successful!\n");
                              break; 
                    } else {
                              attempts++;
                              printf("Incorrect PIN! Attempts remaining: %d\n", 3 - attempts);
                    }

                    if (attempts == 3) {
                              printf("Account Locked! Please contact the bank. Goodbye!!\n");
                              return 0; // Exit program immediately
                    }
          }
          // 2. Dùng DO-WHILE để duy trì Menu
          do{
                    printf("\n-------- ATM MENU --------\n");
                    printf("1. Check Balance\n");
                    printf("2. Savings Interest Projection\n");
                    printf("3. EXIT\n");
                    printf("Please select an option: ");
                    scanf("%d", &choice);

        switch (choice) {
                    case 1:
                              printf("\nCurrent Balance: %d USD\n", balance);
                              break;
                    case 2: 
                              printf("Projected balance after 12 months (1%% interest/month):\n");
                              float temp_balance = balance;

                    // 3. FOR loop to calculate compound interest
                    for (int month = 1; month <= 12; month++) {
                              // Interest Logic
                              temp_balance = temp_balance + (temp_balance * 0.01);
                              printf("Month %d: %.2f USD\n", month, temp_balance);
                    }
                              break;
                    case 3: 
                              printf("Thank you for using our service!!\n");
                              break;
                    default:
                              printf("\nInvalid selection! Please try again.\n");
          }

          }while(choice != 3);
}
