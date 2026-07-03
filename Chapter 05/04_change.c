#include <stdio.h>

int change(int a); // Here change is just a fn prototype, don't go for the name

int change(int a) {
    a=77;  // Miss number,Here only b's value comes which is b's copy but not b
    return 0;   // If you are printing,assigning or anything else then do write that in return or don't write return
}
int main(){
    int b=22; // if we change a, b's value will not change 
    change(b);  // The value of b comes=22,but b doesn't come
    printf("b is %d", b);   // if write change(b) replacing b here then 0 will be printed as return is 0 in fn defination
    return 0;
    }