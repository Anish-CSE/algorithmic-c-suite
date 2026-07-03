#include <stdio.h>
int factorial(int);
                        // Factorial 5 = 1x2x3x4x5
                        // Factorial 4 = 1x2x3x4
                        // Factorial n = factorial (n-1) x n
int factorial(int n){
    if(n == 1 || n == 0){  // Base condition this mean that recursion should end or else stack will be increase
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int a = 3; 
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}