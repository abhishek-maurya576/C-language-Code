#include<stdio.h>
int main() {
int arr[3][3];
printf("Enter your 3X3 matrix\n");
for(int i = 0; i<3; i++) {
    for(int j = 0; j<3; j++){
        scanf("%d  ",&arr[i][j]);
    }
    
}

for(int i = 0; i<3; i++) {
    for(int j = 0; j<3; j++){
        printf("%d  ",arr[i][j]);
    }
    printf("\n\n");
}
    return 0;
}