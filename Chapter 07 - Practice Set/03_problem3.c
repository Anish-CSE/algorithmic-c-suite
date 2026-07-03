#include <stdio.h>

int main(){
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5* (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 X %d = %d \n", i+1, arr[i]);
    }
    
        // don't write this as this is not using array logic in it, so it will regarded as wrong program when talking about array 
        // }
    //  for(int i=1;i<=10;i++){
        // printf("The table is 5 X %d = %d\n", i, 5*i);
    // } 
    // 
    
    return 0;
}