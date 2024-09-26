#include <stdio.h>  // Include header file for input/output functions

int main() {
    // Declare variables
    int i, n, j;
    float arr[100], sum = 0.0;

    // Get the number of elements from the user
    printf("Number of elements of your array: ");
    scanf("%d", &n);

    // Input validation for array size
    while (n > 100 || n < 1) {
        printf("error! the range is 1 to 100.\n");
        printf("enter the number again: ");
        scanf("%d", &n);
    }

    // Get the array elements from the user and calculate the sum
    for (i = 0; i < n; i++) {
        printf("%d Enter Number: ", i + 1);
        scanf("%f", &arr[i]);
        sum = sum + arr[i];  // Accumulate the sum of elements
    }

    // Sort the array in ascending order using bubble sort
    for (i = 0; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (arr[j] < arr[j - 1]) {  // Compare adjacent elements
                float temp = arr[j - 1];  // Swap elements if needed
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Calculate the mean
    double mean = sum * 1.0 / n;  // Cast sum to double for accuracy

    // Calculate the median
    int mid = n / 2;
    double median;
    if (n % 2 == 0) {
        median = (arr[mid - 1] + arr[mid]) / 2.0;  // Average of middle two elements
    } else {
        median = arr[mid];  // Middle element
    }

    // Calculate the mode
    float mode = arr[0];
    int cnt = 1, cnt1 = 1;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cnt1++;  // Increase count for current mode candidate
        } else {
            if (cnt < cnt1) {  // Update mode if count is higher
                cnt = cnt1;
                mode = arr[i];
            }
            cnt1 = 1;  // Reset count for new mode candidate
        }
    }
    if (cnt < cnt1) {  // Handle last element potentially being the mode
        cnt = cnt1;
        mode = arr[i];
    }

    // Print the results
    if (cnt == 1) {  // No mode found
        printf("Mean: %.2f\nMedian: %.2f\nMode: There is no mode\n", mean, median);
    } else {
        printf("Mean: %.2f\nMedian: %.2f\nMode: %.2f\n", mean, median, mode);
    }

    return 0;  // Indicate successful program execution
}
