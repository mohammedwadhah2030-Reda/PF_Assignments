#include <stdio.h>
int main() {
             int a, b;
    printf("nter number of rowses and columns: ");
            scanf("%d %d", &a, &b); 
            
    int matrix[a][b];
    printf("\nEnter elemints of the matrix:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
   printf("Elemen [%d][%d]: ", i, j);
           scanf("%d", &matrix[i][j]);
        } }
        
    printf("\nMatrix entered:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
     printf("%d   ", matrix[i][j]);
        }
        printf("\n");
    }
    int max = matrix[0][0];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
       } }}
    printf("\nThe maximum element in the matrix is: %d\n", max);
    return 0;
}

