#include<stdio.h>
#include<string.h>
int main() {
    char lowercase[50];
    printf("Entrer UPPERCASE word: ");
    gets(lowercase);
    puts(strlwr(lowercase));

    return 0;
}