#include<stdio.h>
int main () {
    int i = 0;
    char str[] = "Hii I am teaching you string";
    while(str[i] != '\0') {
    printf("%c",str[i]);
    i++;
    
     }
    printf("\n\n");

    puts(str);  //another way to print

    return 0;
}
// puts for output
// gets for taking input