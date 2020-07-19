#include <stdio.h>

int main() {
    // Create a pointer
    int *pointer;
    int arr[] = {1, 2, 3, 4, 5, 6};
    // Copy the address of the array to the pointer
    // The pointer is pointing to the array
    // The address of the array is as same as the first character
    // The pointer is pointing to the first character
    pointer = arr;
    // Run the program 5 times and get started moving the pointer from the first character        
    for (int i = 0; i < 6; ++i) {
        printf("Value = %d, address = %p\n", *pointer, pointer);
        pointer = pointer + 1;

    }

    return 0;

}