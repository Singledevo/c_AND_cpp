#include <stdio.h>
void sort(int arr[], int n);
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void merge(int arr1[], int n, int arr2[], int m) {
    int i = n - 1; // Last index of arr1
    int j = 0;     // First index of arr2

    // Start merging from the end of arr1 and beginning of arr2
    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(&arr1[i], &arr2[j]);
        }
        i--;
        j++;
    }

    // Sort both arrays after merging
    sort(arr1, n);
    sort(arr2, m);
}

void sort(int arr[], int n) {
    // A simple bubble sort for demonstration; better sorting algorithms can be used.
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr1[] = {1, 4, 6, 7};
    int arr2[] = {0, 2, 3, 5, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, n, arr2, m);

    // Print the merged arrays
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}