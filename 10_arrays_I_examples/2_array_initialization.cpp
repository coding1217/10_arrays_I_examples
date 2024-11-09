// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 5;

    int a[SIZE];                                        // array of garbage
    int b[SIZE]{};                                      // array of 0's (default values)
    int c[SIZE]{1, 2, 3, 4, 5};                         // array of specific values
    int d[SIZE]{1,2};                                   // partially filled array        


    for(int i=0; i<SIZE; ++i){ cout << a[i] << " "; }
    cout << "\n";
    
    for(int i=0; i<SIZE; ++i){ cout << b[i] << " "; }
    cout << "\n";

    for(int i=0; i<SIZE; ++i){ cout << c[i] << " "; }
    cout << "\n";

    for(int i=0; i<SIZE; ++i){ cout << d[i] << " "; }
    cout << "\n";        

    cout << endl;
    return 0;
}
