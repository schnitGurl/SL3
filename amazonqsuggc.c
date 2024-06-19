#include <stdio.h>

int getValueFromArray(int *array, int len, int index) {
    // Check if the index is within the bounds of the array
    if (index >= 0 && index < len) {
        // Return the value at the specified index
        return array[index];
    } else {
        // Index is out of bounds, return an error value or handle the error
        printf("Error: Index %d is out of bounds for an array of length %d\n", index, len);
        return -1; // or any other appropriate error value
    }
}

int main() {
    int myArray[] = {10, 20, 30, 40, 50};
    int len = sizeof(myArray) / sizeof(int); // Calculate the length of the array

    int value1 = getValueFromArray(myArray, len, 2); // value1 will be 30
    int value2 = getValueFromArray(myArray, len, 5); // value2 will be -1 (out of bounds)

    printf("Value at index 2: %d\n", value1); // Output: Value at index 2: 30
    printf("Value at index 5: %d\n", value2); // Output: Error: Index 5 is out of bounds for an array of length 5
                                              //         Value at index 5: -1

    return 0;
}
