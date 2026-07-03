#include <stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("harry.txt", "r"); // if we change harry.txt to harry2.txt which does not exist then it will show if code

    if(ptr == NULL){
        printf("The file does not exist sorry! \n");
    }
    else{
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num); // This will read 12 

    fscanf(ptr, "%d", &num);              // As we move to another fscanf(), it also move to another reading
    printf("The value of num is %d \n", num);  // This will read 34
    }
    return 0;
}