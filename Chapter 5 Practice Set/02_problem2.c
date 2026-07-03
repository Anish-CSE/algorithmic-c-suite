#include <stdio.h>

float c2f(float ); // Can be written as c2f(float c) same thing will happen

float c2f(float c){
    return ((9*c)/5) + 32;
}
int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for %f is %.2f\n", c, c2f(c));
    printf("The temperature is %f", c2f(35)); // Can be written in this way also without intializing anything
    return 0;
}