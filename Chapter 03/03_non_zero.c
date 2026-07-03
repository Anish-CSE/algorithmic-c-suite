#include <stdio.h>

int main(){
    if(1){                /* you can put bracket or not put only valid for when their
                 is only one iteration, if more than 1 iteration then {} this need to be their*/
        printf("This if is executed!\n");
    }
    if(23456){
        printf("This if is also executed!\n");
    }
    if(2.34){
        printf("This if is also executed!!\n");
    }
    if(0){   // if you are writting zero in if then it will not be executed, negative number can be executed
        printf("This if is also not executed");
    }
    if('apple'){
        printf("This if is also executed!!!");
    }
    return 0;
}