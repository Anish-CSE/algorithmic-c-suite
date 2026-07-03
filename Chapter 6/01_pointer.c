#include <stdio.h>

int main(){
    int i=72;
    int* j=&i;  // j is a pointer pointing to i (j is a integer pointer)
              /* int* j, int *j, int * j == means same thing just pointer OK!*/
    int k=67;
    printf("The address of i is %p\n", &i); // %p is for actual address 
    printf("The address of i is %p\n", j);  // %u is for numerial address(unsigned integer)
    printf("The address of i is %p\n", &k); // %u and %p is both correct to use 

    printf("The value at address j is %d\n", *(&i));
    return 0;
}