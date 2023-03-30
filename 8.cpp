#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, max_idx, temp;
    for (i = 0; i < n-1; i++) {
        max_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

int main() {
    int arr[] = {23, 45, 67, 89, 12, 34, 56, 78};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    selection_sort(arr, n);
    printf("\nSorted array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

