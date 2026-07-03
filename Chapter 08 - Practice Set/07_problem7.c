#include <stdio.h>
#include<string.h>

int main(){
char str[] = "Bbf!sbkb!kj!cb{{b!cb{j!lj!ob!cb{jjj";
for(int i=0;i<strlen(str);i++){
    str[i] = str[i]-1;
}
// now this written thing will be decremented by 1, check the output  

printf("%s", str); // A raja ji..... will be printed as one character ahead means +1 character
                   // Space will printed with some special character or like that
    return 0;
}