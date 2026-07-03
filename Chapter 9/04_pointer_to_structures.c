#include <stdio.h>

struct employee
{
    int code; // this declare a new user defined data type
    float salary;
    char name[10];
}; // This semicolon need to their its important


int main(){
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    printf("%d\n", (*ptr).code); // here (*ptr) is referring %d to take value from e1
                                 // Basically (*ptr) represent e1 here (can be think)

    printf("%d", ptr->code); // this form act same as above one 
                             // ptr-> and (*ptr) is same thing and do the same work
    return 0;
}