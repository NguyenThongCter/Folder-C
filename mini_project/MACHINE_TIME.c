/*  MACHINE TIME_Mini project
*/
#include "stdio.h"
int main(){
          printf("\nTime Machine: Converting Seconds to H:M:S with Toidicodelai!");
          int total_seconds;
          printf("\nEnter total seconds = ");
          scanf("%d", &total_seconds);

          int hours = total_seconds / 3600;
          int remaining_seconds = total_seconds % 3600;
          int minutes = remaining_seconds / 60;
          int final_seconds = remaining_seconds % 60;

          printf("\nConverted Time: %02d hours : %02d minutes : %02d seconds\n", hours, minutes, final_seconds);
}