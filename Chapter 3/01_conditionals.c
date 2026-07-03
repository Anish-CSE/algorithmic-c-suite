#include <stdio.h>

int main(){
    int age = 15;

    if (age>10)
    {
      printf("We are inside the if condition\n");
      printf("Your age is greater than 10\n");  /* code */
    }
    if (age%5==0)
    {
     printf("We are inside the another if condition\n");
     printf("Your age is divisible by 5\n");   /* code */
    }
    
    
    return 0;
}