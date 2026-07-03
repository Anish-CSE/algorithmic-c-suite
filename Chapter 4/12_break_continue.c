#include <stdio.h>

int main(){
    for(int i=0; i<15; i++){
        if(i==5){
            // break; // this means that exits the loop now!(it will print upto 4 only)
            continue; // this means that skip the iteration now
        }
        printf("i is %d\n", i);
    }
    printf("For loop is done!");
    return 0;
}