

#include<stdio.h> int main()
{
int i, j, rows, columns, Multiplication[10][10], Number; printf("\n Please Enter Number of rows and columns\n"); scanf("%d %d", &i, &j);
printf("\n Please Enter the Matrix Elements \n");
for(rows = 0; rows <i; rows++)
{
for(columns = 0;columns <j;columns++)
{
scanf("%d", &Multiplication [rows] [columns]);
}
}
