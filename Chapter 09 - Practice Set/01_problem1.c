#include <stdio.h>

struct vector
{
    int i;
    int j;
};


int main(){
    struct vector v = {1,2}; // this is for 2D vectors we can add k and make it 3D vectors
    printf("The value of vector is %di + %dj", v.i, v.j);
    return 0;
}