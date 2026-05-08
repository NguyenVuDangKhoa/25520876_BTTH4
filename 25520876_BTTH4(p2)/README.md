UCLN
Input: 2 số nguyên a, b
Output: ước chung lớn nhất của a và b
Ý tưởng giải thuật: dùng thuật toán Euclid đệ quy, lặp phép chia lấy dư cho đến khi b = 0

PhanSo::PhanSo(int tu, int mau)
Input: tử số tu, mẫu số mau
Output: khởi tạo một đối tượng phân số đã được rút gọn
Ý tưởng giải thuật: gán tử và mẫu, sau đó gọi RutGon() để tối giản phân số

RutGon
Input: tử số và mẫu số của phân số
Output: phân số ở dạng tối giản, mẫu luôn dương
Ý tưởng giải thuật:
Tìm UCLN của tử và mẫu
Chia cả tử và mẫu cho UCLN
Chuẩn hóa dấu âm về tử số

operator+
Input: 2 phân số hiện tại và a
Output: phân số mới là tổng của 2 phân số
Ý tưởng giải thuật: áp dụng công thức
a/b + c/d = (a*d +b*c)/b*d

operator-
Input: 2 phân số hiện tại và a
Output: phân số mới là hiệu của 2 phân số
Ý tưởng giải thuật: áp dụng công thức
a/b - c/d = (a*d - b*c)/b*d

operator*
Input: 2 phân số hiện tại và a
Output: phân số mới là tích của 2 phân số
Ý tưởng giải thuật: nhân tử với tử, mẫu với mẫu
a/b * c/d = a*c/b*d

operator/
Input: 2 phân số hiện tại và a
Output: phân số mới là thương của 2 phân số
Ý tưởng giải thuật: nhân phân số thứ nhất với phân số nghịch đảo của phân số thứ hai
a/b : c/d = a*d/b*c

operator==
Input: 2 phân số hiện tại và a
Output: true nếu hai phân số bằng nhau, ngược lại false
Ý tưởng giải thuật: so sánh trực tiếp tử số và mẫu số sau khi đã rút gọn

operator>
Input: 2 phân số hiện tại và a
Output: true nếu phân số hiện tại lớn hơn a
Ý tưởng giải thuật: so sánh chéo hai phân số
a/b > c/d <=> a*d > b*c

operator<
Input: 2 phân số hiện tại và a
Output: true nếu phân số hiện tại nhỏ hơn a
Ý tưởng giải thuật: so sánh chéo hai phân số
a/b , c/d <=> a*d < b*c



