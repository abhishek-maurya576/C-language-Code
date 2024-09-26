#include<stdio.h>
int main () {
int a[5];
printf("Enter a five number: ");
for(int i =0;i<=4;i++)
scanf("%d",&a[i]);
for(int i=0;i<5;i++)
printf("%d ",a[i]);
    return 0;
}