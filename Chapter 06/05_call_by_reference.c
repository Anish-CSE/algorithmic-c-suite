#include <stdio.h>

 int sum(int* , int*);

 // Sum should change the value of x here
 int sum(int* a,int* b){
    *a=6; // sum can now change value of x using a as *a (using address of x)
    return *a+*b;
 }
int main(){
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x,&y));//a,b is getting copy of x,y but can't change x,y
    printf("The value of x is %d\n", x);
    return 0;
}