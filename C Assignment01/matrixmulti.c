#include <stdio.h>

int main() {
   int m1[2][3], m2[3][3], result[2][3];
   int i, j, k;

   // Get input for first matrix (2x3)
   printf("Enter elements of first matrix (2x3):\n");
   for (i = 0; i < 2; i++) {
       for (j = 0; j < 3; j++) {
           scanf("%d", &m1[i][j]);
       }
   }

   // Get input for second matrix (3x3)
   printf("Enter elements of second matrix (3x3):\n");
   for (i = 0; i < 3; i++) {
       for (j = 0; j < 3; j++) {
           scanf("%d", &m2[i][j]);
       }
   }

   // Multiply the matrices
   for (i = 0; i < 2; i++) {
       for (j = 0; j < 3; j++) {
           result[i][j] = 0;
           for (k = 0; k < 3; k++) {
               result[i][j] += m1[i][k] * m2[k][j];
           }
       }
   }

   // Print the result matrix
   printf("Resultant matrix:\n");
   for (i = 0; i < 2; i++) {
       for (j = 0; j < 3; j++) {
           printf("%d ", result[i][j]);
       }
       printf("\n");
   }

   return 0;
}
