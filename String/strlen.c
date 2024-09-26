// taking input from user and ca
#include<stdio.h>
#include<string.h>
int main() {
    char str[50];
    printf("Enter Word which you count: ");
    gets(str);
    int a = strlen(str);
    printf("The length of the caracter input: %d",a);
    return 0;
}