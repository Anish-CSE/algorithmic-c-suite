#include <stdio.h>
#include<string.h>

typedef struct employee {    
    int code;   
    float salary; 
    char name[10];
}Emp; // to make your own data type write here like Emp;



int main(){
    Emp e1;   // now no need to write whole struct employee just use Emp peform same work
    // typedef struct employee Emp; 
    // this is going work as same if you don't writr typedef above
    // now also we use this (struct employee e1;) if we have use typedef also above 
    Emp *ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Aryan");
    e1.salary = 54.44;
    printf("%d %f %s \n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);
    // e1. we can also use ptr1-> 

    return 0;
}