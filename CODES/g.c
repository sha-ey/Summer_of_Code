#include <stdio.h>
#include <time.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int mid = low + (high - low) / 2; // Middle element
    int pi = arr[mid]; // Pivot element is the middle element
    swap(&arr[mid], &arr[high]); // Move pivot to end
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] < pi) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]); // Move pivot to its correct position
    return i;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index
        quick_sort(arr, low, pi - 1); // Recursively sort left subarray
        quick_sort(arr, pi + 1, high); // Recursively sort right subarray
    }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int arr[n]; // Static allocation

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    clock_t start = clock(); // Start time measurement

    quick_sort(arr, 0, n - 1); // Perform Quick Sort

    clock_t end = clock(); // End time measurement

    double duration = ((double)(end - start)) / CLOCKS_PER_SEC * 1000; // Calculate duration in milliseconds

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' '); // Print sorted array
    }

    printf("Execution time: %.2f ms\n", duration); // Print execution time

    return 0;
}
