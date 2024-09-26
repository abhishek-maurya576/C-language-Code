#include <stdio.h>
int main()
{
int mat1[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
int mat2[3][3] = { {9, 10, 11}, {12, 13, 14}, {15, 16, 17} }; int sum[3][3], i, j;
printf ("matrix 1 is :\n");
for (i=0; i < 3; i++)
{
for(j = 0; j < 3; j++)
{
printf("%d", mat1[i][j]);
if(j== 3-1)
{
}
printf ("\n\n");
}
}


return 0;
}