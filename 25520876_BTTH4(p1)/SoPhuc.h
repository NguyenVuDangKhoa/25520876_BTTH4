#include <iostream>
using namespace std;

class SoPhuc {
private:
    double iThuc;
    double iAo;

public:
// Cóntructor với tham số mặc định để có thể khởi tạo số thực
SoPhuc(double thuc = 0, double ao = 0) {
        iThuc = thuc;
        iAo = ao;
    }
//Toán tử cộng
    SoPhuc operator+(const SoPhuc& b);
//Toán tử trừ
    SoPhuc operator-(const SoPhuc& b);
//Toán tử nhân
    SoPhuc operator*(const SoPhuc& b) ;
//Toán tử chia
    SoPhuc operator/(const SoPhuc& b) ;
//Toán tử so sánh bằng
    bool operator==(const SoPhuc& b);
//Toán tử so sánh khác
    bool operator!=(const SoPhuc& b) ;
//Toán tử xuất
    friend ostream& operator<<(ostream& os, const SoPhuc& sp) { // Sử dụng friend để có thể truy cập trực tiếp vào thành viên private và định dạng xuất(cout<< SoPhuc a)
        os << sp.iThuc;
        
        if (sp.iAo >= 0)
            os << " + " << sp.iAo << "i";
        else
            os << " - " << -sp.iAo << "i";
        return os;
    }

//Toán tử nhập
    friend istream& operator>>(istream& is, SoPhuc& sp) { // Sử dụng friend để có thể truy cập trực tiếp vào thành viên private và định dạng nhập(cin >> SoPhuc a)
        cout << "Nhap phan thuc: ";
        is >> sp.iThuc;
        cout << "Nhap phan ao: ";
        is >> sp.iAo;
        return is;
    }
};

