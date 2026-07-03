#include <stdio.h>
#include<stdlib.h>
int main(){
    float n = 5;
    float* ptr;
    ptr=(float*) malloc(n*sizeof(int));  // malloc get null so we have written (int*), so that malloc gives int
    // int arr[n];  // this is not allowed as we define n and going to take value from user and then arr[n],not possible
    ptr[0]=3.3;
    ptr[1]=6.45;
    ptr[2]=16.1;
    ptr[3]=62.6;
    ptr[4]=64.0;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}