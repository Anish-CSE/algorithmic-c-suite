#include <stdio.h>

int main(){
    FILE *ptr;
    ptr= fopen("harry.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num); // This will read 12 

    fscanf(ptr, "%d", &num);              // As we move to another fscanf(), it also move to another reading
    printf("The value of num is %d \n", num);  // This will read 34

    fclose(ptr);  // this used to tell operator that we have done and we don't need to open again ,it a good practice to use
    return 0;
}