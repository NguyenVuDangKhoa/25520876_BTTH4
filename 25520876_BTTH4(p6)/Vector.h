
#include <iostream>
#include <vector>
using namespace std;

class CVector {
private:
    vector<double> a;

public:
    CVector(int n = 0);

    friend istream& operator>>(istream& in, CVector& v);
    friend ostream& operator<<(ostream& out, const CVector& v);

    
    CVector operator+(const CVector& other) const;
    CVector operator-(const CVector& other) const;

    CVector operator*(double k) const;     
    double operator*(const CVector& other) const; 
};

