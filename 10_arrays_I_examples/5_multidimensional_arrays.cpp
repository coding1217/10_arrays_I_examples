// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    int matrix[2][3];                     // declare a 2x3 two-dimensional array

    matrix[0][0] = 5;                     // assign the 1st value in the 1st dimension
    matrix[0][1] = 8;                     // assign the 2nd value in the 1st dimension
    matrix[0][2] = 2;                     // assign the 3rd value in the 1st dimension

    matrix[1][0] = 7;                     // assign the 1st value in the 2nd dimension
    matrix[1][1] = 0;                     // assign the 2nd value in the 2nd dimension
    matrix[1][2] = 1;                     // assign the 3rd value in the 2nd dimension

    for(int i=0; i<2; i++) {              // iterate through a 2x3 two-dimensional array
        for(int j=0; j<3; j++) {          // i is first dimension [i][], j the second dimension [][j]
            cout << matrix[i][j] << " ";  // print each value
        }
        cout << "\n";                     // print a newline after inner loop to print as a 2d image
    }

    cout << endl;
    return 0;
}
