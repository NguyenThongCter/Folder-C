/*swap logic project*/
#include "stdio.h"
int main(){
          int a, b;
          printf("\nEnter to swap: ");
          scanf("%d%d", &a, &b);
          int t;
          t = a;
          a = b;
          b = t;
          printf("\nThat number is swapped: %d %d", a, b);
}