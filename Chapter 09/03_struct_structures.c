#include <stdio.h>

struct employee
{
    int code; // this declare a new user defined data type
    float salary;
    char name[10];
}; // This semicolon need to their its important

int main(){
    struct employee facebook[100]; // an array of structures
                                   // we can access the data using this below.....
    facebook[0].code = 100;
    facebook[1].code = 77;
struct employee harry ={100, 77.22, "harry"};//we can this also compare to above of main()
    printf("%d %f %s", harry.code, harry.salary, harry.name);
    
    return 0;
}