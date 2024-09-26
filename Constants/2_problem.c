#include<stdio.h>
int main() {
    const float a = 5.56;  //Now, the value of a variable can't be changed.
    a = 4.56  //If you try to change the the value of PI, it will render compile time error.
    printf("%f",a);
    return 0;
}