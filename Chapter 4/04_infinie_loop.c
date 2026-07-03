#include <stdio.h>

int main(){
        int i=0;
    while(i<10){ // if we write 2<10 instead of i<10 then it will be infinite loop as 2<10 is always true
        printf("The value of i is %d \n", i);
        i++; // if we remove i++ then it will be infinite loop and computer will heat
        // here i++ act as increment and terminate also, and if it's not there then Infinite 
    }
    return 0;
}