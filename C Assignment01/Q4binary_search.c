#include <stdio.h>

int binary_search(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Prevent overflow
        if (arr[mid] == key) {
            return mid;  // Element found
        } else if (arr[mid] < key) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;  // Element to search

    int result = binary_search(arr, 0, n - 1, key);

    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }

    return 0;
}
/* Explanation:

binary_search function:

Takes the array, starting and ending indices, and the key to search as input.
Iterates until low becomes greater than high.
Calculates the middle index mid using a safe approach to prevent overflow.
Compares arr[mid] with the key:
If equal, returns the index mid (element found).
If arr[mid] is less than the key, searches in the right half (low = mid + 1).
If arr[mid] is greater than the key, searches in the left half (high = mid - 1).
If the element is not found, returns -1.
main function:

Creates a sorted array arr.
Stores the number of elements in n.
Sets the key to search for.
Calls the binary_search function.
Prints the result based on the returned index.
Key points:

Sorted array: Binary search works only on sorted arrays.
Time complexity: O(log n), which is very efficient for large arrays.
Divide and conquer: It repeatedly divides the search space in half.
Efficiency: It's much faster than linear search for sorted arrays.
*/