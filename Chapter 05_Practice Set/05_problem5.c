#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // two answer, as evalution order matter here by compiler.
    // 6 6 4 because compiler execute same variables from right to left
    // Both here are correct, so don't panic mostly up one is done by compiler.
    // 4 5 5 some type of compiler execute form left to right 
    return 0;
}