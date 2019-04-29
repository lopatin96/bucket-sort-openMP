#include "utils.h"
#include "algorithms.h"
using namespace std;

// g++ -std=c++11 -o main test_quicksort_todelete.cpp utils.cpp
// ./main

int main(int argc, char* argv[]) {
    vector<int> a = {3, 10, -1, 5, 4, 10, 3};
    printVector(a);
    quicksort(a, 0, a.size());
    printVector(a);
}