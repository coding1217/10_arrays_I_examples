// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    int matrix[2][3]{{5,8,2},{7,0,1}};          // initialize a 2x3 two-dimensional array


    for(int i=0; i<2; i++) {                    // iterate through a 2x3 two-dimensional array
        for(int j=0; j<3; j++) {                // i is first dimension [i][], j the second dimension [][j]
            cout << matrix[i][j] << " ";        // print array value
            cout << &(matrix[i][j]) << "\n";    // print array value memory (contiguous block of memory)
        }
        cout << "\n";                           // print a newline after inner loop to print as a 2d image
    }

    cout << endl;
    return 0;
}
