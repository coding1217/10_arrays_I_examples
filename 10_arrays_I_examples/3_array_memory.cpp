// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 5;
    int a[SIZE]{1,2,3,4,5};

    cout << a << "\n";                  // print the memory address of the first value (the address of the array)

    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";            // print array values
        cout << &(a[i]) << "\n";        // print array memory addresses (contiguous block of data)
    }

    cout << endl;
    return 0;
}