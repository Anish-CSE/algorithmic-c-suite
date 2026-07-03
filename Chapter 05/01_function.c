#include <stdio.h>
// Function prototype
int sum(int ,int);  // can be written as int sum() as function prototype
// Function definition
int sum(int x, int y){  /*This function definition can be written inside or outside 
                 the main() function, its OK but function prototype need to be done*/
    //printf("The sum is %d\n", x+y);
    return x+y;  // this return type should be matched with the above one
}

int main(){
    int a = 1;
    int b =2;
      // int c= a+b;
      // printf("The sum is %d\n", c);
      int c = sum(a,b);   // Function call
      printf("%d\n", c);

      int a1=3;
      int b1=4;
      int c1 = sum(a1,b1); // Function call
      printf("%d\n", c1);
    return 0;
}