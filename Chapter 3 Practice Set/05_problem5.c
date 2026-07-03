// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include<stdio.h>
int main(){
    char ch= 'a';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97 to 122 has lowercase characters according to ASCII Table
    if(ch>=97 && ch<=122){
        printf("This character is lowercase character\n");
    }
    else{
        printf("This character is not a lowercase character\n");
    }
    return 0;
}