#include <stdio.h>
int pat(int p);
int pat(int p){
    for(int i = 1;i<=p;i++){
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    pat(3);
    return 0;
}