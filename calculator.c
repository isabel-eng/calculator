#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float add(float x, float y) {return x+y;}
float sub(float x, float y) {return x+y;}
float mult(float x, float y) {return x*y;}
float div(float x, float y) {return x/y;}

 int main (int argc, char**argv)
 {  float i= atof(argv[1]);
    char *operator= argv[2];
    float j= atof(argv[3]);
    switch (*operator)
        {   case '+': printf("%f\n", add(i,j));
                break;
            case '-': printf("%f\n", sub(i,j));
                break;  
            case '*': printf("%f\n", mult(i,j));
                break; 
            case '/': printf("%f\n", div(i,j));
                break;         
            default: printf("error");
        }
return 0;
 }