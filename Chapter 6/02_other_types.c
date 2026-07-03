#include <stdio.h>

int main(){
    char i='A';
    char* j=&i;  // j is a pointer pointing to i(j is a character pointer)
    float g = 5.34;
    float* g1= &g;
    int k=67;
    printf("The address of i is %p\n", &i); // %p is for actual address 
    printf("The address of i is %p\n", j);  // %u is for numerial address(unsigned integer)
    printf("The address of g is %p\n", &g);
    printf("The address of i is %p\n", &k); // %u and %p is both correct to use 

    printf("The value at address j is %d\n", *(&i)); /* here it will not print A but it will 
                                                    print A's AISCII value as %d is integer so as asked */
    return 0;
}