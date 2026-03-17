#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){

          //random 
          srand(time(NULL));

          //1. Initialize Random Wallet (100k - 300k)
          int wallet = rand() % 201 + 100;
          int food_choice, drink_choice; 
          int total_bill = 0;

          printf("--- Welcome to Toidicodelai's Restaurant ---\n");
          printf("\nCurrent Balance: %d.000 VNĐ", wallet);
          printf("\n-----------------------------------------------");

          //MENU Đồ ĂN
          for(int i = 0; i < 2; i++){
                    printf("\n --- FOOD MENU ---");
                    printf("\n1. Phở bò (BEEF PHO)  --50.000 VNĐ\n");
                    printf("2. Bò Bít Tết (BEEF STEAK) --55.000 VNĐ\n");
                    printf("3. Cơm Chiên Dương Châu (FRIED RICE)  --33.000 VNĐ\n");
                    printf("4. Mì Xào Giòn (CRISPY NOODLES)  --60.000 VNĐ\n");
                    printf("5. Mì xào bò (STIR-FRIED BEEF NOODLES) --62.000 VNĐ\n");
                    printf("Please select your dish:");
                    scanf("%d", &food_choice);
                    switch(food_choice){
                              case 1: total_bill += 50; break;
                              case 2: total_bill += 55; break;
                              case 3: total_bill += 33; break;
                              case 4: total_bill += 60; break;
                              case 5: total_bill += 62; break;
                              default: printf("Food not found in menu!: \n");
                    }
          }





          //MENU ĐỒ UỐNG
          for(int i = 0; i < 2; i++){
                    printf("\n --- DRINK MENU ---");
                    printf("\n1.Pepsi  --20.000 VNĐ");
                    printf("\n2.Coca  --22.000 VNĐ");
                    printf("\n3.Trà Đá (ICED TEA) --10.000 VNĐ");
                    printf("\nSelect select your Drink: ");
                    scanf(" %d", &drink_choice);
                    switch(drink_choice){
                              case 1: total_bill += 20; break;
                              case 2: total_bill += 22; break;
                              case 3: total_bill += 10; break;
                              default: printf("Drink not found in menu!: \n");
                    }
          }
          

          // Logic Thanh Toán
          printf("\n-----------------------------------------------\n");
          printf("Total Bill: %d.000 VNĐ", total_bill);
          if(wallet >= total_bill){
                    wallet -= total_bill;
                    printf("\nResult: Order Confirmed!! Enjoy your meal.\n");
                    printf("Remaining Balance: %d.000 VNĐ", wallet);
          }else{
                    printf("\nResult: Not enough money, homie!! You're short by %d.000 VNĐ", total_bill - wallet);
                    printf("\nBetter call someone for help!!");
          }
      
}
