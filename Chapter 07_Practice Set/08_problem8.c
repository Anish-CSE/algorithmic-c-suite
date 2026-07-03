#include <stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3); // you can write scanf as this form also 
    int arr[3][10];
    int mul[] = {n1, n2, n3}; // Understand the logic we use, or else copy this and ask ChatGpt, Gemini
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
      }
      for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 10; j++)
    {
printf("The value of arr[i][j] is %d\n", arr[i][j]);
    }
    printf(" \n");
    
  }
    
    return 0;
}