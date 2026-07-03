#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i; // * j is storing address of i here
    int** k = &j; // ** k is storing address of j, which is also is storing address of i so **

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j); // think like & is cutting * here (&/* = 1)
    printf("The value of i is %d\n", *(&i));  // same as above
    printf("The value of i is %d\n", **(&j)); // ** cancelled by && so 6

    return 0;
}