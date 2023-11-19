#include <iostream>

#include "myArray.h"

int main() {
    std::cout << "Creating Array1 and pushing some data...\n";
    myArray Array1(10);

    Array1.push(10);
    Array1.push(7);
    Array1.push(12);
    Array1.push(3);

    std::cout << "Array1: "; Array1.print();

    std::cout << "Copying Array1 into Array2 array...\n";
    myArray Array2(Array1);

    std::cout << "Modifying Array2...\n";
    Array2.pop();
    Array2.push(-1);
    Array2.sortArray();

    std::cout << "Array1: "; Array1.print();
    std::cout << "Array2: "; Array2.print();

    std::cout << "Creating array with rValue...\n";
    myArray Array3(myArray({1, 2, 3, 4, 5}));

    std::cout << "Array3: "; Array3.print();

    myArray Array4(std::move(Array3));

    std::cout << "Array4: "; Array4.print();
}