#include <iostream>
#include <vector>
#include <cmath>
#include "DaThuc.h"
using namespace std;
// operator +
cDaThuc cDaThuc::operator+(const cDaThuc& b) const
{
    cDaThuc kq; //Tạo biến để lưu kết quả của phép cộng
    kq.n = max(n, b.n); //Bậc của đa thức kết quả sẽ là bậc lớn nhất giữa hai đa thức
    kq.hs.resize(kq.n + 1, 0);

    for(int i = 0; i <= kq.n; i++)
    {
        if(i <= n) kq.hs[i] += hs[i]; //Nếu bậc i tồn tại trong đa thức hiện tại, cộng hệ số vào kết quả
        if(i <= b.n) kq.hs[i] += b.hs[i]; //Nếu bậc i tồn tại trong đa thức b, cộng hệ số vào kết quả
    }

    return kq; //Trả về đa thức kết quả sau khi cộng
}
cDaThuc cDaThuc::operator-(const cDaThuc& b) const
{
    cDaThuc kq; //Tạo biến để lưu kết quả của phép cộng
    kq.n = max(n, b.n); //Bậc của đa thức kết quả sẽ là bậc lớn nhất giữa hai đa thức
    kq.hs.resize(kq.n + 1, 0);

    for(int i = 0; i <= kq.n; i++)
    {
        if(i <= n) kq.hs[i] += hs[i];  //Nếu bậc i tồn tại trong đa thức hiện tại, cộng hệ số vào kết quả
        if(i <= b.n) kq.hs[i] -= b.hs[i]; //Nếu bậc i tồn tại trong đa thức b, cộng hệ số vào kết quả
    }

    return kq; //Trả về đa thức kết quả sau khi cộng
}
double cDaThuc::operator()(double x) const
{
    double kq = 0; //Tạo biến để lưu giá trị của đa thức tại x
    for(int i = 0; i <= n; i++)
        kq += hs[i] * pow(x, i);  //Công thức tính giá trị của đa thức: P(x) = a_n*x^n + a_(n-1)*x^(n-1) + ... + a_1*x + a_0

    return kq; //Trả về giá trị của đa thức tại x
}
cDaThuc cDaThuc::operator*(const cDaThuc& b) const
{
    cDaThuc kq;

    // Bậc mới = tổng bậc 2 đa thức
    kq.n = n + b.n;

    // Khởi tạo vector hệ số = 0
    kq.hs.resize(kq.n + 1, 0);

    // Nhân từng hệ số
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= b.n; j++)
        {
            kq.hs[i + j] += hs[i] * b.hs[j];
        }
    }

    return kq;
}