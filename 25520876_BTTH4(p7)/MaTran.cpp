#include "MaTran.h"
#include <vector>
CMatrix::CMatrix(int r, int c) {
    rows = r;
    cols = c;

    a.resize(rows, vector<double>(cols, 0));
}
// operator >> (nhập ma trận)
istream& operator>>(istream& is, CMatrix& m) {
    cout << "Nhap so dong va cot: ";
    is >> m.rows >> m.cols;
    m.a.resize(m.rows, vector<double>(m.cols));

    cout << "Nhap cac phan tu:\n";

    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            is >> m.a[i][j];
        }
    }

    return is;
}
// opeartor << (xuất ma trận)
ostream& operator<<(ostream& os, const CMatrix& m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            os << m.a[i][j] << " ";
        }
        os << endl;
    }

    return os;
}

// Ma trận * vector
CVector CMatrix::operator*(const CVector& v) const {
    if (cols != v.size()) { // cột của ma trận phải bằng size của vector mới nhân được
        throw runtime_error("Khong the nhan ma tran voi vector!");
    }

    CVector result(rows); // Tạo 1 biến vector mới lưu giá trị kết quả
 // Nhân vector với ma trận là tích vô hướng của từng hàng của ma trận với với vector
    for (int i = 0; i < rows; i++) {
        double sum = 0;

        for (int j = 0; j < cols; j++) {
            sum += a[i][j] * v[j];
        }

        result[i]=sum;
    }

    return result;
}

// Ma trận * ma trận
CMatrix CMatrix::operator*(const CMatrix& other) const {
    if (cols != other.rows) { // cột của ma trận này phải bằng hàng của ma trận kia
        throw runtime_error("Khong the nhan hai ma tran!");
    }

    CMatrix result(rows, other.cols); // tạo biến ma trận mới lưu giá trị kết quả
 // Nhân 2 ma trận bằng tích vô hướng của từng hàng ma trận này với từng hàng ma trận khác
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < other.cols; j++) {

            double sum = 0;

            for (int k = 0; k < cols; k++) {
                sum += a[i][k] * other.a[k][j];
            }

            result.a[i][j] = sum;
        }
    }

    return result;
}