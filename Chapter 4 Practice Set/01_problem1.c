#include <stdio.h>

int main(){
    int n = 10;
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}