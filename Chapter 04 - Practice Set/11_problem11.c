#include <stdio.h>

int main(){
    int n = 72;
    int prime = 0;
    if (n==0 || n == 1)
    {
        prime=1;
    }
    else{

    int i = 2;
  
    // while(i <n)
    // {
        // if(n%i == 0 && n!=2){
            // prime = 1;
            // break;
        // }
        // i++;

       do  
 {
     if(n%i == 0 && n!=2){
         prime = 1;
         break;
     }
     i++;
    }while(i <n);
}
    if(prime){
        printf("%d is not a prime\n", n);
    }
    else{
        printf("%d is prime\n", n);

    }

    return 0;
}