#pragma once

#include <vector>
#include "myArray.h"

class mySecondArray : public myArray {
    private:
        int partition(int arr[], int start, int end);
        void quickSort(int arr[], int start, int end);
    public:
        mySecondArray(std::vector<int> initialData = {});
        void sortArray();
        void print();
};