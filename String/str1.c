#include<stdio.h>
int main() {
    char str[] = {'h','i',' ','H','\0'};
    int i;
    while(str[i]!= '\0'){
    printf("%c",str[i]);
    i++;
    }
    return 0;
}