#include<iostream>
#include "SoPhuc.h"
using namespace std;
SoPhuc SoPhuc::operator+(const SoPhuc& b) {
    // Tính tổng của hai số phức bằng cách cộng phần thực và phần ảo tương ứng
    return SoPhuc(iThuc + b.iThuc, iAo + b.iAo); // Trả về một đối tượng SoPhuc mới với phần thực và phần ảo được tính toán từ hai số phức hiện tại và b
}
SoPhuc SoPhuc::operator-(const SoPhuc& b) {
    // Tính hiệu của hai số phức bằng cách trừ phần thực và phần ảo tương ứng
    return SoPhuc(iThuc - b.iThuc, iAo - b.iAo); // Trả về một đối tượng SoPhuc mới với phần thực và phần ảo được tính toán từ hai số phức hiện tại và b
}
SoPhuc SoPhuc::operator*(const SoPhuc& b) {
    // Tính tích của hai số phức bằng công thức (a + bi)(c + di) = (ac - bd) + (ad + bc)i
    return SoPhuc(
        iThuc * b.iThuc - iAo * b.iAo,
        iThuc * b.iAo + iAo * b.iThuc
    );
}
SoPhuc SoPhuc::operator/(const SoPhuc& b) {
    // Tính thương của hai số phức bằng công thức (a + bi)/(c + di) = ((ac + bd)/(c^2 + d^2)) + ((bc - ad)/(c^2 + d^2))i
    double mau = b.iThuc * b.iThuc + b.iAo * b.iAo;
    return SoPhuc(
        (iThuc * b.iThuc + iAo * b.iAo) / mau,
        (iAo * b.iThuc - iThuc * b.iAo) / mau
    );// Trả về một đối tượng SoPhuc mới với phần thực và phần ảo được tính toán từ hai số phức hiện tại và b
}
bool SoPhuc::operator==(const SoPhuc& b) {
    // So sánh hai số phức bằng cách kiểm tra xem phần thực và phần ảo của chúng có bằng nhau hay không
    return (iThuc == b.iThuc && iAo == b.iAo);// Trả về true nếu cả phần thực và phần ảo của hai số phức đều bằng nhau, ngược lại trả về false
}
bool SoPhuc::operator!=(const SoPhuc& b) {
    // So sánh hai số phức bằng cách kiểm tra xem phần thực hoặc phần ảo của chúng có khác nhau hay không
    return !(*this == b);// Trả về true nếu hai số phức không bằng nhau, ngược lại trả về false
}
