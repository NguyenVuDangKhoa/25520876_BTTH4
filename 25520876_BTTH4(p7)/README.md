CMatrix::CMatrix(int r, int c)
Input: số dòng r, số cột c
Output: khởi tạo ma trận kích thước r x c với các phần tử bằng 0
Ý tưởng giải thuật: dùng resize() để cấp phát ma trận 2 chiều và gán mặc định bằng 0

operator>>
Input: số dòng, số cột và các phần tử ma trận từ bàn phím
Output: cập nhật dữ liệu cho ma trận
Ý tưởng giải thuật:
Nhập kích thước ma trận
Cấp phát lại ma trận
Nhập từng phần tử theo hàng và cột

operator<<
Input: đối tượng ma trận m
Output: xuất các phần tử ma trận theo dạng bảng
Ý tưởng giải thuật: duyệt từng hàng và từng cột để in toàn bộ phần tử

operator*(const CVector& v) (ma trận × vector)
Input: ma trận hiện tại và vector v
Output: vector kết quả sau phép nhân
Ý tưởng giải thuật:
Kiểm tra số cột ma trận bằng số chiều vector
Với mỗi hàng của ma trận, tính tích vô hướng với vector để tạo phần tử kết quả

operator*(const CMatrix& other) (ma trận × ma trận)
Input: 2 ma trận hiện tại và other
Output: ma trận kết quả sau phép nhân
Ý tưởng giải thuật:
Kiểm tra số cột ma trận thứ nhất bằng số hàng ma trận thứ hai
Mỗi phần tử kết quả được tính bằng tích vô hướng giữa hàng của ma trận thứ nhất và cột của ma trận thứ hai 🧮
