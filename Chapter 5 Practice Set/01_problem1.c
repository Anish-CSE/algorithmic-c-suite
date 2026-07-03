#include <stdio.h>

float average(int a, int b, int c);
float average(int a, int b, int c){
    return (a+b+c)/3.0; // here 3.0 means float so we will get float answer
}
int main(){
    int a = 3, b=9,c=5; // can be written as printf("%f", average(3, 9, 5));
    printf("The average of a, b and c is %f", average(a,b,c));
    
    return 0;
}