#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr=(int*) calloc(n, sizeof(int));  // suppose we want 6 pens the here it will be calloc(6, pen);
    // int arr[n];  // this is not allowed as we define n and going to take value from user and then arr[n],not possible
    ptr[0]=3;
    printf("%d", ptr[0]);
    return 0;
}