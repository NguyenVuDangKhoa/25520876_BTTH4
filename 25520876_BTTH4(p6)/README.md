CVector::CVector(int n)
Input: số chiều n
Output: khởi tạo vector có n phần tử bằng 0
Ý tưởng giải thuật: dùng resize() để cấp phát vector với kích thước n và gán mặc định bằng 0

operator>>
Input: số chiều và các phần tử vector từ bàn phím
Output: cập nhật dữ liệu cho vector
Ý tưởng giải thuật:
Nhập số chiều
Cấp phát lại kích thước vector
Nhập lần lượt từng phần tử

operator<<
Input: đối tượng vector v
Output: xuất vector theo dạng (a1, a2, ..., an)
Ý tưởng giải thuật: duyệt toàn bộ vector và in từng phần tử theo định dạng chuẩn

operator+
Input: 2 vector hiện tại và other
Output: vector mới là tổng của hai vector
Ý tưởng giải thuật:
Kiểm tra hai vector có cùng số chiều không
Cộng từng phần tử tương ứng

operator-
Input: 2 vector hiện tại và other
Output: vector mới là hiệu của hai vector
Ý tưởng giải thuật:
Kiểm tra hai vector cùng số chiều
Trừ từng phần tử tương ứng

operator*(double k)
Input: vector hiện tại và số thực k
Output: vector mới sau khi nhân với số k
Ý tưởng giải thuật: nhân từng phần tử của vector với k

operator*(const CVector& other) (tích vô hướng)
Input: 2 vector hiện tại và other
Output: giá trị tích vô hướng của hai vector
Ý tưởng giải thuật:
Kiểm tra hai vector cùng số chiều
Nhân từng cặp phần tử tương ứng rồi cộng dồn
vector a (a1,a2,...,aN) ; vector b(b1,b2,...,bN)
vector a * vector b = a1*b1 +a2*b2 + ...+ aN*bN

