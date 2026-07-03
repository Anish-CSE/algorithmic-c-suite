#include <stdio.h>

void change_to_thirty_times(int* a);
void change_to_thirty_times(int* a){
    *a = *a * 10;
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_thirty_times(&x);
    printf("The value of x is %d\n", x);
    return 0;
} 
//Try Yourself

// By myself

//  int ref(int*);
//  int ref(int* a){
    // *a=13;
    // return *a;
//  }
//  int main(){
    // int i=6;
    // printf("The value is %d\n", ref(&i));
    // return 0;
//  }
