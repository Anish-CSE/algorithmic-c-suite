#include <stdio.h>
// Function prototype
int sum(int, int);
// Function definition
int sum(int x, int y){  /*This function definition can be written inside or outside 
                 the main() function, its OK but function prototype need to be done*/
    //printf("The sum is %d\n", x+y);
    return x+y;  // this return type should be matched with the above one
}

int main(){
      int c = sum(1,2);// Function call and without intializing 1 and 2 this can be done
      printf("%d\n", c);
    return 0;
}