/*GPA Calculator*/
#include "stdio.h"
int main(){
          printf("Today, let's do some GPA calculations together with Toidicodelai, okay?");
          printf("\nEnter my Math, Physics, and Chemistry scores: ");
          float Math, English, Chemistry;
          scanf("%f %f %f", &Math, &English, &Chemistry);

          float Average_Score = (Math + English + Chemistry) / 3;

          printf("My average score: %.2f\n", Average_Score);

          float GPA =(Average_Score / 10) * 4;
          printf("My GPA 4 toidicodelai: %.2f", GPA);
}