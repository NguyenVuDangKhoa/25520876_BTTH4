#include<iostream>
#include "SoPhuc.h"
using namespace std;
int main() {
    SoPhuc a, b;

    cout << "Nhap so phuc a:\n";
    cin >> a;

    cout << "Nhap so phuc b:\n";
    cin >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\nTong: " << a + b;
    cout << "\nHieu: " << a - b;
    cout << "\nTich: " << a * b;
    cout << "\nThuong: " << a / b;

    if (a == b)
        cout << "\nHai so bang nhau";
    else
        cout << "\nHai so khac nhau";

    SoPhuc c = 5; // kiểm tra khởi tạo số thực bằng cách sử dụng constructor với tham số mặc định
    cout << "\n\nSo thuc c = " << c;

    return 0;
}
