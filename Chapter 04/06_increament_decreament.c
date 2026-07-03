#include <stdio.h>

int main(){
    int i=5;
    printf("The value or i is %d\n", i);

    i= i+5; //10
    printf("The value of i is %d\n");
    printf("The value of i is %d\n", i++); //10
    printf("The value of i is %d\n", i); //11
    
    i +=2;
    printf("The value of i is %d\n", i); //13
    // i++ prints i first and then incrament i(Post Increament)
    // ++i increament i first and then print i(Pre Increament)
        return 0;
}