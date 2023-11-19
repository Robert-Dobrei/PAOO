#include <iostream>
#include "myInterface.h"
#include "utils.h"

void myInterface::print() {
    utils::printArrayOfInt(array, n);
}