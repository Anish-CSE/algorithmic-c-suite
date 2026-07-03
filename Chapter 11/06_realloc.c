#include <stdio.h>
#include<stdlib.h>
int main(){
    int n =5;
    int* ptr;
    ptr=(int*) malloc(n*sizeof(int)); // here malloc was storing 5 integers
    ptr[0]=3;
    printf("%d", ptr[0]);
    ptr =(int*) realloc(ptr, 10*sizeof(int)); // here realloc was storing 10 intergers
    free(ptr);
    
    return 0;
}