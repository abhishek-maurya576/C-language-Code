// Function to perform iterative binary search on a sorted array
int iterativeBinarySearch(int array[], int start_index, int end_index, int element) {

    // Loop until start_index exceeds end_index
    while (start_index <= end_index) {

        // Calculate the middle index
        int middle = start_index + (end_index - start_index) / 2;

        // Check if the element is found at the middle index
        if (array[middle] == element) {
            return middle;  // Element found, return its index
        }

        // If the element is not found, narrow the search range
        if (array[middle] < element) {
            start_index = middle + 1;  // Search in the right subarray
        } else {
            end_index = middle - 1;  // Search in the left subarray
        }
    }

    // Element not found in the array, return -1
    return -1;
}
