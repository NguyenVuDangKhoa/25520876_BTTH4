
#include <iostream>
#include <iomanip>
using namespace std;

class CTime {
private:
    int iGio, iPhut, iGiay;

    void DongHo(){
    int total = iGio * 3600 + iPhut * 60 + iGiay;

    total %= 86400;
    if (total < 0) total += 86400;

    iGio = total / 3600;
    iPhut = (total % 3600) / 60;
    iGiay = total % 60;
}

public:
    CTime(int h = 0, int m = 0, int s = 0){
    iGio = h;
    iPhut = m;
    iGiay = s;
    DongHo();
    }
    
    CTime operator+(int giay);
    CTime operator-(int giay);
    
    CTime& operator++();     // prefix
    CTime operator++(int);   // postfix
    CTime& operator--();
    CTime operator--(int);

    
    friend ostream& operator<<(ostream& os, const CTime& t) {
        os << setw(2) << setfill('0') << t.iGio << ":"
           << setw(2) << setfill('0') << t.iPhut << ":"
           << setw(2) << setfill('0') << t.iGiay;
        return os;
    }
    friend istream& operator>>(istream& is, CTime& t){
    do {
        cout << "Nhap gio: ";
        is >> t.iGio;
        cout << "Nhap phut: ";
        is >> t.iPhut;
        cout << "Nhap giay: ";
        is >> t.iGiay;

        if (t.iGio < 0 || t.iGio > 23 ||
            t.iPhut < 0 || t.iPhut > 59 ||
            t.iGiay < 0 || t.iGiay > 59)
            cout << "Nhap sai, nhap lai!\n";

    } while (t.iGio < 0 || t.iGio > 23 ||
             t.iPhut < 0 || t.iPhut > 59 ||
             t.iGiay < 0 || t.iGiay > 59);

    return is;
}
};