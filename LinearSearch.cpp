#include <iostream>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int array[] = {12, 25, 8, 14, 5, 30, 6, 28};
    int targetElement = 30;
    int arraySize = sizeof(array) / sizeof(array[0]);
    int result = linearSearch(array, arraySize, targetElement);
    if (result != -1) {
        std::cout << "Element " << targetElement << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << targetElement << " not found in the array" << std::endl;
    }

    return 0;
}
