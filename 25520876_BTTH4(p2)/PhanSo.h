
#include <iostream>
using namespace std;

class PhanSo {
private:
    int iTu, iMau;

    void RutGon() ;

public:
    // Constructor duy nhất
    PhanSo(int tu = 0, int mau = 1);

    // Operator
    PhanSo operator+(const PhanSo& a);
    PhanSo operator-(const PhanSo& a);
    PhanSo operator*(const PhanSo& a);
    PhanSo operator/(const PhanSo& a);

    bool operator==(const PhanSo& a);
    bool operator>(const PhanSo& a);
    bool operator<(const PhanSo& a);

    // Nhập xuất
    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
    os << ps.iTu << "/" << ps.iMau;
    return os;
}
    friend istream& operator>>(istream& is, PhanSo& ps) {
    is >> ps.iTu >> ps.iMau;

    while (ps.iMau == 0) {
        cout << "Mau phai khac 0, nhap lai: ";
        is >> ps.iTu >> ps.iMau;
    }

    ps.RutGon();
    return is;
}
};