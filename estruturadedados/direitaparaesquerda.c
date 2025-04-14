#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {  // 
            if (arr[j] > arr[j - 1]) { // 
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 1, 4, 2, 8 , 3 ,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}