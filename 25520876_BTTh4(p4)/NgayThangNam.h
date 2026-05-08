#include <iostream>
#include <iomanip>
using namespace std;

class CDate {
private:
    int iNgay, iThang, iNam;
CDate NgayThangNamTiepTheo();
CDate NgayThangNamTruocDo();
long long Trans ()const;
public:
    CDate(int d = 1, int m = 1, int y = 1900);

    CDate operator+(int n);
    CDate operator-(int n);

    long long operator-(const CDate& other);

    CDate& operator++();    
    CDate operator++(int);   
    CDate& operator--();
    CDate operator--(int);

    friend ostream& operator<<(ostream& os, const CDate& d) ;
    

    friend istream& operator>>(istream& is, CDate& d) ;
};