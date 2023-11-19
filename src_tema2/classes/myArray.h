#pragma once

#include <vector>

class myArray {
    private:
        int n = 0;
        int avMemory = 0;
        int *array = NULL;
    public:
        myArray(int totalSize);
        myArray(const myArray& arrayToCopy);
        myArray &operator=(const myArray& arrayToCopy);
        myArray(myArray&& arrayToMove);
        myArray &operator=(myArray&& arrayToMove);
        myArray(std::vector<int> initialData = {});
        ~myArray();
        void push(int x);
        void pop();
        void sortArray();
        void print();
};