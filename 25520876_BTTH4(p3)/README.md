operator+
Input: thời gian hiện tại và số giây giay
Output: đối tượng thời gian mới sau khi cộng thêm giây
Ý tưởng giải thuật: cộng số giây vào iGiay, sau đó khởi tạo đối tượng thời gian mới

operator-
Input: thời gian hiện tại và số giây giay
Output: đối tượng thời gian mới sau khi trừ giây
Ý tưởng giải thuật: trừ số giây khỏi iGiay, sau đó khởi tạo đối tượng thời gian mới

operator++() (tiền tố ++t)
Input: thời gian hiện tại
Output: thời gian sau khi tăng 1 giây
Ý tưởng giải thuật: tăng iGiay lên 1, gọi DongHo() để chuẩn hóa giờ phút giây, rồi trả về chính đối tượng hiện tại

operator++(int) (hậu tố t++)
Input: thời gian hiện tại
Output: giá trị thời gian trước khi tăng 1 giây
Ý tưởng giải thuật:
Lưu bản sao thời gian hiện tại vào temp
Tăng iGiay lên 1

operator--() (tiền tố --t)
Input: thời gian hiện tại
Output: thời gian sau khi giảm 1 giây
Ý tưởng giải thuật: giảm iGiay đi 1, gọi DongHo() để chuẩn hóa thời gian rồi trả về đối tượng hiện tại

operator--(int) (hậu tố t--)
Input: thời gian hiện tại
Output: giá trị thời gian trước khi giảm 1 giây
Ý tưởng giải thuật:
Lưu bản sao thời gian hiện tại vào temp
Giảm iGiay đi 1
Gọi DongHo() để chuẩn hóa
Trả về temp
