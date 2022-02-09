#include "stdio.h"

void sumArray(int arr[], int size, int *result);

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Sum should be 15
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    sumArray(arr, arraySize, &result);
    printf("The sum of the array is: %d", result);
    return 0;
}

void sumArray(int arr[], int size, int *result) {
    for (int i = 0; i < size; i++)
    {
        *result += arr[i];
    }
}