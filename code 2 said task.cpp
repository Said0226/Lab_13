#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) 
{
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[minIndex] and arr[i]
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    int choice;
    std::cout << "Select sorting algorithm:\n";
    std::cout << "1. Insertion Sort\n";
    std::cout << "2. Bubble Sort\n";
    std::cout << "3. Selection Sort\n";
    std::cout << "Enter choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            insertionSort(arr, n);
            std::cout << "Array sorted using Insertion Sort:\n";
            break;
        case 2:
            bubbleSort(arr, n);
            std::cout << "Array sorted using Bubble Sort:\n";
            break;
        case 3:
            selectionSort(arr, n);
            std::cout << "Array sorted using Selection Sort:\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            return 1;
    }

    printArray(arr, n);
    return 0;
}

