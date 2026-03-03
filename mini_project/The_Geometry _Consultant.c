/*Let build The Geometry Consultant*/
#include "stdio.h"
#include "math.h"
int main(){
          printf("--- Welcome to the Geometry Expert System by toidicodelai ---\n!!");
          float a, b, c;
          printf("\nEnter three sides of a triangle (a b c): ");
          scanf("%f %f %f", &a, &b, &c);

          if(a + b > c && a + c > b && b + c > a){
                    if(a == b && b ==c){
                              printf("\nEquilateral Triangle!");
                    }else if(a == b || a == c || b == c ){
                              printf("\nIsosceles Triangle!");
                    }else if((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a)){
                              printf("\nRight-angled Triangle!");
                    }else{              
                              printf("\nScalene Triangle!");
                    }
                    float p = (a+b+c)/2;
                    float s = sqrt(p*(p-a)*(p-b)*(p-c));
                    printf("\nHeron's Area: %.2f", s);
          }else {
                    printf("\nThese sides do not form a valid triangle!!");
          }
}