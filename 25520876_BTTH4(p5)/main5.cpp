#include <iostream>
#include "DaThuc.h"
using namespace std;

int main()
{
    int n,m;
    cout<<"Nhap bac cho da thuc thu 1:"<<endl;
cin>>n;
cout<<"Nhap bac cho da thuc thu 2:"<<endl;
cin>>m;
    cDaThuc p(n), q(m);

    cout << "Nhap da thuc P:\n";
    cin >> p;

    cout << "\nNhap da thuc Q:\n";
    cin >> q;

    cout << "\nP(x) = " << p;
    cout << "\nQ(x) = " << q;

     // Cộng
    cDaThuc tong = p + q;
    cout << "\n\nP(x) + Q(x) = " << tong;

    // Trừ
    cDaThuc hieu = p - q;
    cout << "\nP(x) - Q(x) = " << hieu;

    // Nhân 2 đa thức
    cDaThuc tich = p * q;

    cout << "\n\nP(x) * Q(x) = " << tich;

    // Test thêm giá trị tại x 
    double x;
    cout << "\n\nNhap gia tri x: ";
    cin >> x;

    cout << "P(" << x << ") = " << p(x);
    cout << "\nQ(" << x << ") = " << q(x);
    cout << "\n(P+Q)(" << x << ") = " << tong(x);
    cout << "\n(P-Q)(" << x << ") = " << hieu(x);
    cout << "\n(P*Q)(" << x << ") = " << tich(x);

    return 0;
}