#include <stdio.h>
#include<string.h>

int main(){
char str[] = "Aae raja ji bazza bazi ki na baziii";
for(int i=0;i<strlen(str);i++){
    str[i] = str[i]+1;
}  
printf("%s", str); // A raja ji..... will be printed as one character ahead means +1 character
                   // Space will printed with some special character or like that
    return 0;
}