#include <stdio.h>
#include<string.h>

struct employee {    // always written outside the main() function
    int code;   // This declare a new user defined data type
    float salary; 
    char name[10];
}; // This semicolon is important.



int main(){
    struct employee e1, e2;  // in e1 the above ones int, float, char is stored using structures
    e1.code = 4511;
    strcpy(e1.name, "Aryan");
    e1.salary = 54.44;
    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
}