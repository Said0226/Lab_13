#include <iostream>

void insertionSortDescending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
       
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSortDescending(arr, n);
    std::cout << "Array sorted in descending order using Insertion Sort:\n";
    printArray(arr, n);

    return 0;
}

