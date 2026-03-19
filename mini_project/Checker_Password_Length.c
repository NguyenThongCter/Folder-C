#include "stdio.h"
#include "string.h"
int main(){
          printf("----- ToidiCodeLai's Security Lab: Password Strength Checker -----");

          char pass[100]; // contains 100 character
          int upper = 0, lower = 0, digit = 0, special = 0;
          int length = 0; // length

          printf("\nPlease enter your password: ");
          scanf("%s", pass); // Bản thân mang tên mảng [pass] nên nó là địa chỉ rồi, không cần thêm "&"

          // soi ký tự đến khi end chuỗi gặp NULL ('\0')
          for(int i = 0; pass[i] != '\0'; i++){
                    length++;
                    if(pass[i] >= 'A' && pass[i] <= 'Z'){
                              upper++;
                    }else if(pass[i] >= 'a' && pass[i] <= 'z'){
                              lower++;
                    }else if(pass[i] >= '0' && pass[i] <= '9'){
                             digit++;
                    }else{
                              special++;
                    }
          }
          printf("\n--- Statistics ---");
          printf("\nTotal length: %d characters", length);
          printf("\nUppercase: %d | Lowercase: %d | Digits: %d | Special: %d", upper, lower, digit, special);

          // Logic check mạnh yếu
          printf("\nPassword Security Level: ");
          if(length > 8 && upper > 0 && lower > 0 && (digit > 0 ||special > 0)){
                    printf("Strong (Quá mạnh)!!!\n");
          }else if(length > 6 && upper > 0 && lower > 0 && (digit > 0 ||special > 0)){
                    printf("MEDIUM (Bình Thường)!!\n");
          }else{
                    printf("Weak (Yếu)!\n");
          }
}