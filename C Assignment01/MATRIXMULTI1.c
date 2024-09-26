#include<stdio.h>    
void main()
{  
int a[10][10],b[10][10],multiply[10][10],r,r1,c,c1,i,j,k;    
printf("Enter first matrix rows and columns: ");
scanf("%d %d", &r, &c);
printf("Enter the first matrix elements:\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("Enter second matrix rows and columns: ");
scanf("%d %d", &r1, &c1);
printf("Enter the second matrix elements:\n");    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
for(i=0;i<r;i++)    
{    
for(j=0;j<c1;j++)    
{    
multiply[i][j]=0;    

for(k=0;k<c1;k++)    
{    
multiply[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
printf("Multiply of two matrix:\n");    
for(i=0;i<r;i++)    
{    
printf("\n");
for(j=0;j<c1;j++)    
{    
printf("%d\t",multiply[i][j]);    
}    
}    
} 

