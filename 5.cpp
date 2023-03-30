#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int i, j, k;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size;) {
            if (arr[j] == arr[i]) {
                for (k = j; k < size; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
