#include <stdio.h>

int main() {
  int arr[50], even[50], odd[50];
  int n, i, j = 0, k = 0;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Separating even and odd elements
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      even[j] = arr[i];
      j++;
    } else {
      odd[k] = arr[i];
      k++;
    }
  }

  // Printing even elements
  printf("\nEven elements: ");
  for (i = 0; i < j; i++) {
    printf("%d ", even[i]);
  }

  // Printing odd elements
  printf("\nOdd elements: ");
  for (i = 0; i < k; i++) {
    printf("%d ", odd[i]);
  }

  return 0;
}
