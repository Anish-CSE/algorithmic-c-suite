#include <stdio.h>

int main(){
    for (int i = 5; i ; i--) // here first intialization then checking condition then print and finally i value decreases
    {
      printf("%d\n", i);   /* IN C language if a variable is non zero then its true , if we put a variable = negative 
                           number then ok, but by itself C take negative number as false so its doesnot print here*/
    }
    
    return 0;
}