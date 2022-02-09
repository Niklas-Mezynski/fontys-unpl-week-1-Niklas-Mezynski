#include "stdio.h"

int numOfTimesInArray(int arr[], int number, int arraySize) {
    int count = 0;
    for (int i = 0; i < arraySize; ++i) {
        if ((arr[i]) == number) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[6] = {1, 2, 3, 2, 22, 2};
    int n = 2;
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int arraySize2 = (&arr)[1] - arr;
    printf("Scenario 1, arraySize calculation method 1 - Number of times the number %d appears in the array: %d\n", n, numOfTimesInArray(arr, n, arraySize));
    printf("Scenario 1, arraySize calculation method 2 - Number of times the number %d appears in the array: %d\n", n, numOfTimesInArray(arr, n, arraySize2));
    //------------
    int arr2[0] = {};
    int n2 = 0;
    int arraySize2_1 = sizeof(arr) / sizeof(arr[0]);
    int arraySize2_2 = (&arr)[1] - arr;
    printf("Scenario 2, arraySize calculation method 1 - Number of times the number %d appears in the array: %d\n", n, numOfTimesInArray(arr2, n2, arraySize2_1));
    printf("Scenario 2, arraySize calculation method 2 - Number of times the number %d appears in the array: %d\n", n, numOfTimesInArray(arr2, n2, arraySize2_2));
    return 0;
}