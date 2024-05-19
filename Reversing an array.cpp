#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5; // Assuming the size of the array is known

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Reverse the array using a for loop
    for (int i = 0; i < size; i++) {
        // Swap elements at index i and (size - 1 - i)
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    std::cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

