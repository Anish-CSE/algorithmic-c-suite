#include <stdio.h>

int main(){

    //   //Using do while loop
    // int i = 1;
// int sum = 0;
// do{
    // sum += i; // This means same as sum = sum + i
    // i++;
// }while(i<=10);

// Using for loop
int sum = 0;
for(int i = 1; i<= 10; i++){
    sum += i;
}
printf("The sum of first 10 natural number is %d", sum);
    return 0;
}
