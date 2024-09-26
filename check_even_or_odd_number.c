//Write a program to check if a number is even or odd.
#include<stdio.h>
int main() {
int number;
printf("Enter Number: ");
scanf("%d",&number);
if(number % 2 == 0) {
    printf("You enter Number is Even Number \n");
}
else{
    printf("You enter Number is ODD Number \n");
}
    return 0;
}