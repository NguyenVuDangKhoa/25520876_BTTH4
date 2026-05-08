
#include <iostream>
#include <vector>
using namespace std;

class CVector {
private:
    vector<double> a;

public:
    CVector(int n = 0)
    {
            a.resize(n, 0);
    }
    // operator >> (nhập vector)
    friend istream& operator>>(istream& is, CVector& v)
    {
    int n;
    cout << "Nhap so chieu: ";
    is >> n;
    v.a.resize(n);
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        is >> v.a[i];
    }
    return is;
}
    // operator << (xuất vector)
    friend ostream& operator<<(ostream& os, const CVector& v)
    {
    os << "(";
    for (int i = 0; i < v.a.size(); i++) {
        os << v.a[i];
        if (i < v.a.size() - 1) os << ", ";
    }
    os << ")";
    return os;
}
// các hàm getter của class CVector
     double& operator[](int i)
     {
            return a[i];

     }
    double operator[](int i) const
    {
            return a[i];

    }

int size() const
{ 
        return a.size();

}

    
    
};

class CMatrix {
private:
    vector<vector<double>> a;
    int rows, cols;

public:
    CMatrix(int r = 0, int c = 0);

    friend istream& operator>>(istream& is, CMatrix& m);
    friend ostream& operator<<(ostream& os, const CMatrix& m);
    

    // Ma trận * vector
    CVector operator*(const CVector& v) const;

    // Ma trận * ma trận
    CMatrix operator*(const CMatrix& other) const;
};

