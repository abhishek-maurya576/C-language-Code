#include <stdio.h>

int main(void) {
  float a,b;
  printf("Enter Your First Number: ");
scanf("%f",&a);
printf("Enter Your Second Number: ");
  scanf("%f",&b);
  if(a>b) {
    printf("The First Number is Greater Than The Second Number");
    }
else if(b>a) {
  printf("The Second Number is Greater Than The First Number");
}
  else {
    printf(" The First Number is Equal To Second Number");
  }
  return 0;
}