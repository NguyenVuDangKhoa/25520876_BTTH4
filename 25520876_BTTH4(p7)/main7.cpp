#include <iostream>
#include "MaTran.h"
using namespace std;

int main() {

    try {
        CMatrix A, B;
        CVector v;

        cout << "Nhap ma tran A:\n";
        cin >> A;

        cout << "\nNhap vector v:\n";
        cin >> v;

        cout << "\nA * v = \n";
        cout << A * v << endl;

        cout << "\nNhap ma tran B:\n";
        cin >> B;

        cout << "\nA * B = \n";
        cout << A * B << endl;
    }
    catch (exception& e) {
        cout << e.what();
    }

    return 0;
}