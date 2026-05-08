#include "Vector.h"

// Constructor khởi tại mặc định có tham số mặc nhiên
CVector::CVector(int n) {
    a.resize(n, 0); // tạo vector có n chiều
}

// operator >> (Nhập)
istream& operator>>(istream& in, CVector& v) {
    int n;
    cout << "Nhap so chieu: ";
    in >> n;

    v.a.resize(n);
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        in >> v.a[i];
    }
    return in;
}

// operator << (Xuất)
ostream& operator<<(ostream& out, const CVector& v) {
    out << "(";
    for (int i = 0; i < v.a.size(); i++) {
        out << v.a[i];
        if (i < v.a.size() - 1) out << ", ";
    }
    out << ")";
    return out;
}

// operator +
CVector CVector::operator+(const CVector& other) const {
    if (a.size() != other.a.size())
        throw runtime_error("Khac so chieu!"); 

    CVector result(a.size());
    for (int i = 0; i < a.size(); i++) {
        result.a[i] = a[i] + other.a[i];
    }
    return result;
}

// operator 
CVector CVector::operator-(const CVector& other) const {
    if (a.size() != other.a.size())
        throw runtime_error("Khac so chieu!");

    CVector result(a.size());
    for (int i = 0; i < a.size(); i++) {
        result.a[i] = a[i] - other.a[i];
    }
    return result;
}

// Nhân số
CVector CVector::operator*(double k) const {
    CVector result(a.size());
    for (int i = 0; i < a.size(); i++) {
        result.a[i] = a[i] * k;
    }
    return result;
}

// Tích vô hướng
double CVector::operator*(const CVector& other) const {
    if (a.size() != other.a.size())
        throw runtime_error("Khac so chieu!");

    double sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i] * other.a[i];
    }
    return sum;
}