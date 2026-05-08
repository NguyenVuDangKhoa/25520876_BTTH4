#include "PhanSo.h"
#include <iostream>
using namespace std;

// Hàm tính ước chung lớn nhất (UCLN) của hai số nguyên, VD : UCLN(12, 15) = 3, UCLN(18, 24) = 6
// Giup rút gọn phân số
int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (b == 0) return a;
    return UCLN(b, a % b);
}

// Constructor với tham số mặc định (tu = 0, mau = 1)
PhanSo::PhanSo(int tu, int mau) {
    iTu = tu;
    iMau = mau;
    RutGon(); // Rút gọn ngay khi khởi tạo
}

// Rút gọn phân số
void PhanSo::RutGon() {
     int kq;
    if (iTu < 0 && iMau < 0)
    {

        kq = UCLN(iTu, iMau);
		iTu = abs(iTu / kq);   // Triệt tiêu dấu âm ở tử và mẫu
        iMau = abs(iMau / kq);
    }

    else if (iTu < 0)
    {
        kq = UCLN(iTu,iMau);
		iTu = iTu / kq;  // Dấu âm ở tử vẫn giữ nguyên, chỉ triệt tiêu dấu âm ở mẫu
        iMau = iMau / kq;

    }
    else if (iMau < 0)
    {
        kq = UCLN(iTu, iMau);
		iTu = -iTu / kq;     // Triệt tiêu dấu âm ở mẫu, đồng thời chuyển dấu âm sang tử
        iMau = abs(iMau / kq);

    }
    else
    {
        kq = UCLN(iTu, iMau);
        iTu = iTu / kq;
        iMau = iMau / kq;
    }


}
// operator cộng 2 phân số
PhanSo PhanSo::operator+(const PhanSo& a) {
    // Cộng hai phân số: a/b + c/d = (a*d + c*b) / (b*d)
    return PhanSo(
        iTu * a.iMau + a.iTu * iMau,
        iMau * a.iMau
    );
}

// operator trừ 2 phân số
PhanSo PhanSo::operator-(const PhanSo& a) {
    // Trừ hai phân số: a/b - c/d = (a*d - c*b) / (b*d)
    return PhanSo(
        iTu * a.iMau - a.iTu * iMau,
        iMau * a.iMau
    );
}

// operator nhân 2 phân số
PhanSo PhanSo::operator*(const PhanSo& a) {
    // Nhân hai phân số: a/b * c/d = (a*c) / (b*d)
    return PhanSo(
        iTu * a.iTu,
        iMau * a.iMau
    );
}

// operator chia 2 phân số
PhanSo PhanSo::operator/(const PhanSo& a) {
    // Chia hai phân số: (a/b) / (c/d) = (a*d) / (b*c)
    return PhanSo(
        iTu * a.iMau,
        iMau * a.iTu
    );
}

//  operator so sánh bằng 2 phân số
bool PhanSo::operator==(const PhanSo& a) {
    // Hai phân số đã được rút gọn, nên chỉ cần so sánh tử và mẫu
    return iTu == a.iTu && iMau == a.iMau;
}

//  operator so sánh lớn hơn 2 phân số
bool PhanSo::operator>(const PhanSo& a) {
    // So sánh hai phân số: a/b > c/d <=> a*d > c*b
    return iTu * a.iMau > a.iTu * iMau;
}


//  operator so sánh nhỏ hơn 2 phân số
bool PhanSo::operator<(const PhanSo& a) {
    // So sánh hai phân số: a/b < c/d <=> a*d < c*b
    return iTu * a.iMau < a.iTu * iMau;
}

