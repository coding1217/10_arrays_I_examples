// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string s = "Hello";                     // string 

    char a[5] = {'A','B','C','D','E'};      // array of 5 characters

    for(int i=0; i<10; ++i){                // logical error: out-of-bounds read access (logical era)
        cout << a[i];
    }
    cout << "\n";

    for(int i=0; i<10; ++i) {               // logical error: out-of-bounds write access (buffer overflow)
        a[i] = 'Z';
    }

    for(int i=0; i<10; ++i){                // logical error: out-of-bounds read access (logical era)
        cout << a[i];
    }
    cout << "\n";    

    cout << s << "\n";                      // logical error: string s is corrupted

    cout << endl;
    return 0;
}
