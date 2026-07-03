#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr=(int*) malloc(n*sizeof(int));  // malloc get null so we have written (int*), so that malloc gives int
    // int arr[n];  // this is not allowed as we define n and going to take value from user and then arr[n],not possible
                    // so we use this type of things
    ptr[0]=3;
    ptr[1]=6;
    printf("%d", ptr[0]);
    return 0;
}