#include<stdio.h>
int main() {
int arr[2][3] = { {5,4,7},{1,2,3}};
for(int i = 0; i<2; i++) {
    for(int j = 0; j<3; j++){
        printf("%d  ",arr[i][j]);
    }
    printf("\n\n");
}
    return 0;
}