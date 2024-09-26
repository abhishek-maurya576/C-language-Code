#include<stdio.h>
int main () {
    int i = 0;
    char str[50];
    printf("Enter your Name: ");
    //char str[] = "Hii I am teaching you string";
   scanf("%s",str);
   puts(str);

    return 0;
}
/*
%c:

Used to format and print a single character.
Expects an int argument as input, typically the ASCII code of the desired character.
Example: printf("%c", 65); will print the uppercase letter "A", as 65 is the ASCII code for "A".

%s:

Used to format and print a string of characters.
Expects a pointer to a character array (i.e., a string) as input.
Example: printf("%s", "Hello world!"); will print the entire string "Hello world!".*/