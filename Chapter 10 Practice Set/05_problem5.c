#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("int.txt", "r");  /* here what value we entered in int.txt file after running
                                   this program the value is getting double */
    fscanf(ptr, "%d", &num);

    fclose(ptr);

    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", 2*num);

    fclose(ptr);
    return 0;
}