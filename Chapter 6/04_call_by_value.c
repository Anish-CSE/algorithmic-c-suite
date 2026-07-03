#include <stdio.h>

 int sum(int , int);

 int sum(int a,int b){
    a=6; // sum can't change x value like this using a
    return a+b;
 }
int main(){
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(x,y));//a,b is getting copy of x,y but can't change x,y
                                                      // here sum is 6(this one is of a) + 6 so sum = 12
    printf("The value of x is %d\n", x);
    return 0;
}