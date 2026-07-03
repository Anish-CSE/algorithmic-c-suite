#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("harry.txt", "w"); // "w" mode will empty the file and then store the given value, in this case 432
    int num = 432;
fprintf(fptr, "%d", num);
fclose(fptr);
    return 0;
}