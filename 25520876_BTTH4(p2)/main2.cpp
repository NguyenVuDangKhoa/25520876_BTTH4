#include "PhanSo.h"
#include <iostream>
using namespace std;

int main() {
    PhanSo a, b;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\nTong: " << a + b;
    cout << "\nHieu: " << a - b;
    cout << "\nTich: " << a * b;
    cout << "\nThuong: " << a / b;

    if (a == b)
        cout << "\nBang nhau";
    else if (a > b)
        cout << "\na > b";
    else
        cout << "\na < b";

    // Test số nguyên
    cout<<"\n kiem tra constructor nhan tu so nguyen: ";
    PhanSo c = 5;
    cout << "\n\nc = " << c;

    return 0;
}