#include <iostream>
#include "NgayThangNam.h"
using namespace std;

double TinhLaiKepNgay(double goc, double laiNgay,
                      CDate ngayGui,
                      CDate ngayRut);
int main() {
    CDate a, b;
    cin >> a >> b;

    cout << "\na = " << a;
    cout << "\nb = " << b;

    // + -
    cout << "\n+10 ngay: " << a + 10;
    cout << "\n-5 ngay: " << a - 5;

    // ===== PREFIX ++ =====
    CDate before_pre_inc = a;
    CDate result_pre_inc = ++a;

    cout << "\n\n[Prefix ++]";
    cout << "\nBefore: " << before_pre_inc;
    cout << "\nResult (++a): " << result_pre_inc;
    cout << "\nAfter: " << a;

    // ===== POSTFIX ++ =====
    CDate before_post_inc = a;
    CDate result_post_inc = a++;

    cout << "\n\n[Postfix ++]";
    cout << "\nBefore: " << before_post_inc;
    cout << "\nResult (a++): " << result_post_inc;
    cout << "\nAfter: " << a;

    // ===== PREFIX -- =====
    CDate before_pre_dec = a;
    CDate result_pre_dec = --a;

    cout << "\n\n[Prefix --]";
    cout << "\nBefore: " << before_pre_dec;
    cout << "\nResult (--a): " << result_pre_dec;
    cout << "\nAfter: " << a;

    // ===== POSTFIX -- =====
    CDate before_post_dec = a;
    CDate result_post_dec = a--;

    cout << "\n\n[Postfix --]";
    cout << "\nBefore: " << before_post_dec;
    cout << "\nResult (a--): " << result_post_dec;
    cout << "\nAfter: " << a;

    // ===== khoảng cách =====
    long long kc = a - b;
    cout << "\n\nKhoang cach (a - b): " << kc << " ngay\n";

    // ===== LÃI SUẤT =====
    double goc, laiNgay;

    cout << "\nNhap so tien gui: ";
    cin >> goc;

    cout << "Nhap lai suat moi ngay (vd 0.001 = 0.1%): ";
    do
    {       if(laiNgay>=1) cout<<"lai khong hop le, Nhap lai:"<<endl;


         cin>>laiNgay;
} while( laiNgay>=1); // Nếu lãi >=1 nhập lại


    double tien = TinhLaiKepNgay(goc, laiNgay, b, a);

    cout << "So tien sau khi gui: " << tien << endl;

    return 0;
}