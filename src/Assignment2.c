#include "stdio.h"

void sumArray(int arr[], int size, int *result);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int result;
    sumArray(arr, arraySize, &result);
    printf("Scenario 1 - The sum of the array is: %d\n", result); // Sum should be 15

    arr[0] = 6;
    sumArray(arr, arraySize, &result);
    printf("Scenario 2 - The sum of the array is: %d\n", result); // Sum should be 20

    int arr2[1] = {0};
    sumArray(arr2, 1, &result);
    printf("Scenario 2 - The sum of the array is: %d\n", result); // Sum should be 0

    return 0;
}

void sumArray(int arr[], int size, int *result) {
    *result = 0;
    for (int i = 0; i < size; i++)
    {
        *result += arr[i];
    }
}