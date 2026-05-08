isLeapYear
Input: năm y
Output: true nếu là năm nhuận, ngược lại false
Ý tưởng giải thuật: kiểm tra năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100

daysInMonth
Input: tháng m, năm y
Output: số ngày của tháng trong năm tương ứng
Ý tưởng giải thuật: dùng switch-case để xác định số ngày từng tháng, riêng tháng 2 kiểm tra năm nhuận

TinhLaiKepNgay
Input: tiền gốc goc, lãi suất ngày laiNgay, ngày gửi ngayGui, ngày rút ngayRut
Output: số tiền sau khi tính lãi kép theo ngày
Ý tưởng giải thuật:
Tính số ngày gửi bằng phép trừ hai ngày
Áp dụng công thức lãi kép
A=P(1+r)^n

CDate::CDate
Input: ngày d, tháng m, năm y
Output: khởi tạo đối tượng ngày tháng năm
Ý tưởng giải thuật: gán trực tiếp giá trị cho ngày, tháng, năm

Trans
Input: ngày hiện tại
Output: tổng số ngày tính từ mốc 01/01/0001 đến ngày hiện tại
Ý tưởng giải thuật:
Cộng số ngày của các năm trước
Cộng số ngày của các tháng trước
Cộng thêm ngày hiện tại

NgayThangNamTiepTheo
Input: ngày hiện tại
Output: ngày kế tiếp
Ý tưởng giải thuật:
Tăng ngày lên 1
Nếu vượt số ngày trong tháng thì chuyển sang tháng mới
Nếu tháng vượt 12 thì sang năm mới

NgayThangNamTruocDo
Input: ngày hiện tại
Output: ngày trước đó
Ý tưởng giải thuật:
Giảm ngày xuống 1
Nếu ngày < 1 thì lùi tháng
Nếu tháng < 1 thì lùi năm và chuyển tháng về 12

operator+(int n)
Input: ngày hiện tại và số ngày n
Output: ngày sau khi cộng n ngày
Ý tưởng giải thuật: lặp n lần, mỗi lần gọi NgayThangNamTiepTheo()

operator-(int n)
Input: ngày hiện tại và số ngày n
Output: ngày sau khi trừ n ngày
Ý tưởng giải thuật: lặp n lần, mỗi lần gọi NgayThangNamTruocDo()

operator++() (prefix)
Input: ngày hiện tại
Output: ngày sau khi tăng 1 ngày
Ý tưởng giải thuật: cập nhật đối tượng thành ngày kế tiếp rồi trả về chính nó

operator++(int) (postfix)
Input: ngày hiện tại
Output: giá trị ngày trước khi tăng
Ý tưởng giải thuật:
Lưu bản sao hiện tại
Tăng ngày lên ngày kế tiếp
Trả về bản sao cũ

operator--() (prefix)
Input: ngày hiện tại
Output: ngày sau khi giảm 1 ngày
Ý tưởng giải thuật: cập nhật đối tượng thành ngày trước đó rồi trả về chính nó

operator--(int) (postfix)
Input: ngày hiện tại
Output: giá trị ngày trước khi giảm
Ý tưởng giải thuật:
Lưu bản sao hiện tại
Giảm ngày xuống ngày trước đó
Trả về bản sao cũ

operator-(const CDate& other)
Input: 2 đối tượng ngày
Output: khoảng cách số ngày giữa hai ngày
Ý tưởng giải thuật: chuyển cả hai ngày thành tổng số ngày bằng Trans(), sau đó lấy hiệu

operator<<
Input: đối tượng ngày d
Output: xuất ngày theo định dạng dd/mm/yyyy
Ý tưởng giải thuật: dùng setw và setfill('0') để định dạng đủ 2 chữ số cho ngày và tháng

operator>>
Input: ngày, tháng, năm từ bàn phím
Output: cập nhật đối tượng ngày hợp lệ
Ý tưởng giải thuật:
Nhập dữ liệu
Kiểm tra tính hợp lệ của ngày tháng năm
Nếu sai thì yêu cầu nhập lại
