#include <stdio.h>
#include<string.h>

int main(){
char st[]= "Anish";
printf("%d", strlen(st)); //strlen counts the number of alphabets we use and exludes the null character 
                          // Use %d for strlen() , don't use %f for strlen() as it will print 0.0000
    return 0;
}