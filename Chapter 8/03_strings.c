#include <stdio.h>

int main(){
    //char st[]={'a', 'b', 'c', '\0'}; //here \0 (null character) means that the string is now ended 
    char st[]= "a b c"; // Same as above one, "" this mean that automatically null character is their
    
    // for(int i=0; i <=3; i++){
    // printf(" character is %c \n", st[i]);
    // }

    printf("%s", st); // just write this behalf of above for one same thing we will get 
    // %s is for strings
    return 0;
}