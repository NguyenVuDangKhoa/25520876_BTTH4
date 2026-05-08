#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
    CVector v1, v2;

    cin >> v1 >> v2;

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;

    cout << "v1 + v2 = " << v1 + v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;

    cout << "v1 * 2 = " << v1 * 2 << endl;

    cout << "Tich vo huong = " << v1 * v2 << endl;

    return 0;
}