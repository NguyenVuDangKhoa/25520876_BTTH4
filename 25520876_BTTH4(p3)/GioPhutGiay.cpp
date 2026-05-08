#include "GioPhutGiay.h"
#include <iostream>
#include <iomanip>
using namespace std;

// + giây
CTime CTime::operator+(int giay) {
    return CTime(iGio, iPhut, iGiay + giay);
}

// - giây
CTime CTime::operator-(int giay) {
    return CTime(iGio, iPhut, iGiay - giay);
}

// ++t
CTime& CTime::operator++() {
    iGiay++;
    DongHo();
    return *this;
}

// t++
CTime CTime::operator++(int) {
    CTime temp = *this;
    iGiay++;
    DongHo();
    return temp;
}

// --t
CTime& CTime::operator--() {
    iGiay--;
    DongHo();
    return *this;
}

// t--
CTime CTime::operator--(int) {
    CTime temp = *this;
    iGiay--;
    DongHo();
    return temp;
}

