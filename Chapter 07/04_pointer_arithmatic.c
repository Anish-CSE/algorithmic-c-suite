#include <stdio.h>

int main(){
    // int a =5;
    // int *ptr = &a;

    // printf("The address of a is %u\n", &a);//you write &a or not but it will print address anyhow
        // printf("The address of a is %u\n", ptr);
        // ptr++; // here increment will by 4 as bytes it(int a=5) require is 4 so this happen
        // 
        // /*Depends on what arithmatic operator we are using, that operator require how many bytes 
        //  to store it, by that number of bytes it will be increment if we use ptr++ like thing */
        //   
        //   printf("The address of a is %u\n", ptr);

char a = 'A'; // char require 1 bytes 
char *ptr = &a;
printf("The address of a is %u\n", &a);
printf("The address of a is %u\n", ptr);
ptr++; /*if ptr-- then decrement by 4 bytes,if ptr=ptr+1 then increment by 4 bytes,if ptr=ptr+2 then 
         increment by 8 bytes so on like this .....*/
printf("The value of ptr is %u\n", ptr);
    return 0;
}