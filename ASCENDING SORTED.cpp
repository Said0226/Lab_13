#include <iostream>

void bubbleSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1] to arrange in ascending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {44391, 44647, 47777, 53759, 55181, 55223, 55225, 55330, 55349, 55356,
                 55405, 55434, 55465, 55469, 55566, 55579, 55584, 55590, 55632, 55633,
                 55652, 55691, 55700, 55766, 55780, 55843, 55853};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSortAscending(arr, n);
    std::cout << "Array sorted in ascending order using Bubble Sort:\n";
    printArray(arr, n);

    return 0;
}

