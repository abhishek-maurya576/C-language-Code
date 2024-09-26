#include<stdio.h>
int main () {
int a[5],i;
for(i =0;i<=4;i++){
//int a = i+1;
printf("Enter a number of %d :",a);
scanf("%d",&a[i]);
}
for(int i=0;i<5;i++)
printf("%d ",a[i]);
    return 0;
}