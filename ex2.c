#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int rows, col;

int main() {
	scanf("%d",&rows);
	col = rows;
	
	for(int i = 0; i < rows; ++i) {
      for(int j = 0; j < col; ++j) {
          scanf("%d",&A[i][j]);
      }
  }
  
   for(int i = 0; i < rows; ++i) {
      for(int j = 0; j < col; ++j) {
          scanf("%d",&B[i][j]);
      }
  }
  
     for(int i = 0; i < rows; i++) {
        for(int j = 0; j < col; j++) {
            C[i][j] = 0;
            for(int k = 0; k < rows; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
    }
        }
        
    for(int i = 0; i < rows; ++i) {
      for(int j = 0; j < col; ++j) {
          printf("%6d", C[i][j]);
      }
      printf("\n");
  }
  
}
