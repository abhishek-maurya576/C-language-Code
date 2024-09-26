#include <stdio.h>

int main() {
   int m1[2][3] = {{1, 2, 3}, {4, 5, 6}};
   int m2[3][3] = {{7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
   int result[2][3];

   // Multiplication logic
   for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 3; j++) {
           result[i][j] = 0;
           for (int k = 0; k < 3; k++) {
               result[i][j] += m1[i][k] * m2[k][j];
           }
       }
   }

   // Print the result
   printf("Resultant Matrix:\n");
   for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 3; j++) {
           printf("%d ", result[i][j]);
       }
       printf("\n");
   }

   return 0;
}
