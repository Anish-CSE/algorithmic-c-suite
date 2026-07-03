#include <stdio.h>

int main(){
    char st[30];
    gets(st); // multi word string\input can stored using gets(), for single use scanf()
    printf("%s", st);
     // puts(st); // it move curser on next line(it will print the st and move on next line)
                  // puts(st); do the same work as printf("%s\n", st); use anyone and gets same thing
    printf("hey");
    return 0;
}