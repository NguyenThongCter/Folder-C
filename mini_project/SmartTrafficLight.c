/*Smart Traffic Light Simulator (use switch)*/
#include "stdio.h"
int main(){
          printf("Let's build Smart Traffic Light with Toidicodelai");
          int signal;
          printf("---SMART TRAFFIC LIGHT SIMULATOR---\n");
          printf("1. Red Light\n");
          printf("2. Yellow Light\n");
          printf("3. Green Light\n");
          printf("\nEnter signal (1 or 2 or 3): ");
          scanf("%d", &signal);

          switch(signal){
                    case 1: 
                              printf("\nRed light!!\n");
                              printf("Stop it");
                              break;
                    case 2: 
                              printf("\nYellow light!!\n");
                              printf("Slow it");
                              break; 
                    case 3: 
                              printf("\nGreen light!!\n");
                              printf("GO!!!");
                              break;
                    default: 
                              printf("Choose signal again!!");
          }
}