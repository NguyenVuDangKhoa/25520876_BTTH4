#include<iostream>
#include <cmath>
#include "NgayThangNam.h"
using namespace std;
// Hàm kiểm tra năm nhuận
bool isLeapYear(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);// Năm nhuận nếu chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
}
// Hàm trả về số ngày trong tháng
int daysInMonth(int m, int y) {
    switch (m) {
        // Các tháng có 31 ngày
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
    	// Các tháng có 30 ngày
    case 4: case 6: case 9: case 11: return 30;
    	// Tháng 2 có 28 hoặc 29 ngày tùy vào năm nhuận
    case 2: return isLeapYear(y) ? 29 : 28;
    default: return 0;
    }
}
// Hàm tính lãi suất ngân hàng
double TinhLaiKepNgay(double goc, double laiNgay,
                      CDate ngayGui,
                      CDate ngayRut)
{
    long long soNgay = ngayRut - ngayGui; // tính số ngày đã gửi

    if (soNgay < 0) return 0; // bảo vệ

    return goc * pow(1 + laiNgay, soNgay); // Trả về gốc lẫn lãi
}
// Constructor có tham số mặc định
CDate::CDate(int d, int m, int y) {
    iNgay = d; iThang = m; iNam = y;}
// Hàm chuyển Ngày Tháng Năm sang số ngày cụ thể (01/01/2024 → 738885 ; 05/01/2024 → 738889)
long long CDate::Trans() const {
    long long days = iNgay; // lấy số ngày hiện tại
    // cộng dồn các ngày của năm trước ( VD: năm hiện tại:2024, cộng dồn các ngày từ năm 1 -> 2023)
    for (int y = 1; y < iNam; y++)
        days += isLeapYear(y) ? 366 : 365;
    // cộng dồn các ngày của các tháng trước trong năm hiện tại (VD: 15/03/2024, cộng dồn các ngày từ tháng 1 -> 2)
    for (int m = 1; m < iThang; m++)
        days += daysInMonth(m, iNam);
    return days;
}
CDate CDate::NgayThangNamTiepTheo()
{
	// Tạo một đối tượng CDate mới để lưu ngày tiếp theo
    CDate nextDate;
    nextDate.iNgay = iNgay + 1;
    nextDate.iThang = iThang;
    nextDate.iNam = iNam;
	// Kiểm tra nếu ngày vượt quá số ngày trong tháng hiện tại
	if (nextDate.iNgay > daysInMonth(iThang, iNam)) // Nếu ngày vượt quá số ngày trong tháng
    {
		nextDate.iNgay = 1; // Reset ngày về 1
		nextDate.iThang++;// Tăng tháng lên 1
		if (nextDate.iThang > 12) // Kiểm tra nếu tháng vượt quá 12
        {
			nextDate.iThang = 1; // Reset tháng về 1
			nextDate.iNam++; // Tăng năm lên 1
        }
    }
	return nextDate; // Trả về đối tượng CDate mới chứa ngày tiếp theo
}
CDate CDate::NgayThangNamTruocDo() {
	// Tạo một đối tượng CDate mới để lưu ngày trước đó
    CDate prev;
    prev.iNgay = iNgay - 1;
    prev.iThang = iThang;
    prev.iNam = iNam;
    // Kiểm tra nếu ngày bé hơn 1 thì điều chỉnh tháng
    if (prev.iNgay < 1) {
        prev.iThang--; //Tháng bị giảm xuống
        if (prev.iThang < 1) { // Nếu tháng bé hơn 1 thì điều chỉnh năm
            prev.iThang = 12; // Tháng được reset trở về 12
            prev.iNam--; //Năm bị giảm xuống
        }
        prev.iNgay = daysInMonth(prev.iThang, prev.iNam);
    }
    return prev; // Trả về đối tượng CDate mới chứa ngày trước đó
}
// operator + 
CDate CDate::operator+(int n) {
    CDate kq = *this;
    for (int i = 0; i < n; i++) {
        kq = kq.NgayThangNamTiepTheo();
    }
    return kq;
}
// operator -
CDate CDate::operator-(int n) {
    CDate kq = *this;
    for (int i = 0; i < n; i++) {
        kq = kq.NgayThangNamTruocDo();
    }
    return kq;
}
// operator ++ (prefix)
CDate& CDate::operator++() {
    *this = NgayThangNamTiepTheo();
    return *this;
}

// operator ++ (postfix)
CDate CDate::operator++(int) {
    CDate temp = *this;
    *this = NgayThangNamTiepTheo();
    return temp;
}

// operator -- (prefix)
CDate& CDate::operator--() {
    *this = NgayThangNamTruocDo();
    return *this;
}

// operator -- (postfix)
CDate CDate::operator--(int) {
    CDate temp = *this;
    *this = this->NgayThangNamTruocDo();
    return temp;
}
// operator - (tính khoảng cách giữ 2 ngày)
long long  CDate::operator-(const CDate& other) {
    return this->Trans() - other.Trans();
}

ostream& operator<<(ostream& os, const CDate& d) {
    os << setw(2) << setfill('0') << d.iNgay << "/"
       << setw(2) << setfill('0') << d.iThang << "/"
       << d.iNam;
    return os;
}

istream& operator>>(istream& is, CDate& d) {
    do {
        cout << "Nhap (dd mm yyyy): ";
        is >> d.iNgay >> d.iThang >> d.iNam;

        if (d.iNam <= 0 || d.iThang < 1 || d.iThang > 12 ||
            d.iNgay < 1 || d.iNgay > daysInMonth(d.iThang, d.iNam))
            cout << "Sai, nhap lai!\n";

    } while (d.iNam <= 0 || d.iThang < 1 || d.iThang > 12 ||
             d.iNgay < 1 || d.iNgay > daysInMonth(d.iThang, d.iNam));

    return is;
}