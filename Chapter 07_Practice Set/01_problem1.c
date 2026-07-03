#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;
    printf("The value at address %u is %d", ptr+2, *(ptr+2));

    // ptr+2;
    // printf("%d\n", *ptr);
    // printf("%d", ptr);  // here ptr gives address of a[0], to get ptr+2 write ptr+2 behalf of ptr here
    return 0;
}