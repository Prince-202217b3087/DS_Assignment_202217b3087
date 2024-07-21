#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, pos, temp;

    for (i = 0; i < n - 1; i++) {
        pos = smallest(arr, i, n);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

int smallest(int arr[], int i, int n) {
    int small = arr[i];
    int pos = i;

    for (int j = i + 1; j < n; j++) {
        if (small > arr[j]) {
            small = arr[j];
            pos = j;
        }
    }

    return pos;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}