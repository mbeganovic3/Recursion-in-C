#include <stdio.h>
#include <string.h>

char binary [10]; // Assume N will not be larger than 10
int max, N, indx; 
// n the recursive function, set array[index] = ‘0’, then call the recursive function, printBinary(array, index + 1, N - 1). Then, change array[index], and recurse again. When calling the recursive function from main, start with index = 0.
//
void binaryPatternGeneration(char binary[], int indx, int N) {
   if(N == 0) puts(binary);
   else{
   binary[max - N] = '0';              
   binaryPatternGeneration(binary, indx, N - 1);
   if(binary[(max - N) - 1] != '1'){
        binary[max - N] = '1';               
        binaryPatternGeneration(binary, indx, N - 1);
    }
   }
}

int main() {
   scanf("%d", &N);
   binary[N] = '\0'; 
   max = N;
   indx = 0;
   binaryPatternGeneration(binary, indx, N);
}
