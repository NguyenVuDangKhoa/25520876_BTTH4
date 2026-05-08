#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main() {
    CTime t;
    cin >> t;

    cout << "\nTime: " << t;

    // + -
    cout << "\n+70s: " << t + 70;
    cout << "\n-5000s: " << t - 5000;

    // ===== ++ =====
    cout << "\n\n++t: " << ++t;
    cout << "\nt++: " << t++;
    cout << "\nSau t++: " << t;

    // ===== -- =====
    cout << "\n\n--t: " << --t;
    cout << "\nt--: " << t--;
    cout << "\nSau t--: " << t;

    return 0;
}