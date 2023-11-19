#include <iostream>
#include "mySecondArray.h"
#include "utils.h"

mySecondArray::mySecondArray(std::vector<int> initialData) {
    std::cout << "Called mySecondArray constructor with default data\n";

    int totalSize = initialData.size();

    array = (int*)malloc(totalSize * sizeof(int));
    if(!array) {
        std::cout << "Allocation error. Exiting...\n";
        exit(1);
    }

    avMemory = totalSize;

    for(int& x: initialData) {
        array[n++] = x;
    }
}

int mySecondArray::partition(int arr[], int start, int end)
{

    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotIndex = start + count;

    std::swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            std::swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void mySecondArray::quickSort(int arr[], int start, int end)
{
    if (start >= end) return;

    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

void mySecondArray::sortArray() {
    std::cout << "Using quicksort instead of bubble sort...\n";
    quickSort(array, 0, n);
}

void mySecondArray::print() {
    std::cout << "mySecondArray::: ";
    utils::printArrayOfInt(array, n);
}