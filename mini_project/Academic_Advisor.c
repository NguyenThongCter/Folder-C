/*Let builds Academic Advisor */
#include "stdio.h"
int main(){
          printf("Today let's build Academic Advisor with Todicodelai!!");
          float gpa10, gpa4;
          printf("\nEnter average (GPA): ");
          scanf("%f", &gpa10);

          gpa4 = (gpa10 / 10) * 4;
          printf("\nMy scores 4 : %.2f", gpa4);
          
          if(gpa4 >= 3.6){
                    printf("\nYou got a scholarship");
          }else if(gpa4 >= 3.2){
                    printf("\nVery Good");
          }else if(gpa4 >= 2.5){
                    printf("\nGood");
          }else if(gpa4 >= 2.0){
                    printf("\nAverage - you are not my son");
          }else{
                    printf("\nWarning need study harder!!");
          }

          printf("\nFinal Results is: %s", (gpa4 >= 2.0)?"PASSED":"FAILED");

}