#include <stdio.h>

int main(){
    char st[]={'a', 'b', 'c', '\0'}; // here \0 (null character) means that the string is now ended 
    printf("First character is %c \n", st[0]); // %c format specifier we use for char 
    
    return 0;
}