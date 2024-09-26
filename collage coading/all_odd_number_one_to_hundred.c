#include<stdio.h>
int main() { printf("Odd number from 1 to 100: ");
    for(int i=1;i<=100;i++)
    if(i%2!=0) printf("%d  ",i);
    return 0;
}