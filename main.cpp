#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int b[4][4];

    for (int k = 0; k < 2; ++k) {
        if (k == 0) {
            cout << "Enter the values of the first matrix: " << endl;
        } else if (k == 1) {
            cout << "Enter the values of the second matrix: " << endl;
        }
        for (int  i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                k == 0 ? cin >> a[i][j] : cin >> b[i][j];
            }
        }
    }

    bool is_equal = true;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (a[i][j] != b[i][j]) {
                is_equal = !is_equal;
            }
        }
    }

    if (is_equal) {
        cout << endl << "Equal" << endl;
    } else {
        cout << endl << "Not equal" << endl;
    }
    cout << endl;

    for (int k = 0; k < 2; ++k) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                k == 0 ? cout << a[i][j] << ' ' : cout << b[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
