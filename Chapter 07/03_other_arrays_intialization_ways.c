#include <stdio.h>

int main(){
    int cgpa[3]= {9,8,8}; // here automatically cgpa[0]=9,cgpa[1]=8,cgpa[2]=8
    // if I write cgpa[]={9,8,8} then it will automatically do the things which it did above
    for (int i = 0; i < 3; i++)
{
   printf("The value of array at index %d is %d\n", i, cgpa[i]);
}
return 0;
}