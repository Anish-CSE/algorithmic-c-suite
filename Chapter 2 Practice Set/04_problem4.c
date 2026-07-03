#include <stdio.h>

int main(){
    int a = 2, b=3, c = 3, d=1;
    float e= 3*a/b - c+d;
    //3*2/b - c+d     : We solve from left to right
    // 6/3 - c+d
    // 2 -3 +1        : We solve from left to right
    // -1+1
    // 0
       printf("The value of e is %f", e);
    return 0;
}