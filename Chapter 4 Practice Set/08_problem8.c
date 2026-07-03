#include <stdio.h>

int main(){
   // 5!= 1*2*3*4*5  (Factorial)
   // 0! = 1
    int product  = 1;  // Usually product is intialized to 1 and sum is intialized by 0
    int n = 4;
for (int i = 1; i <= n; i++) 
{
    product  *= i;
}
printf("The factorial is %d", product);
    
    return 0;
}