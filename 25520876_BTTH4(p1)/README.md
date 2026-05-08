operator+
Input: 2 số phức hiện tại và b
Output: số phức mới là tổng của 2 số phức
Ý tưởng giải thuật: cộng phần thực với phần thực, phần ảo với phần ảo

operator-
Input: 2 số phức hiện tại và b
Output: số phức mới là hiệu của 2 số phức
Ý tưởng giải thuật: trừ phần thực và phần ảo tương ứng

operator*
Input: 2 số phức hiện tại và b
Output: số phức mới là tích của 2 số phức
Ý tưởng giải thuật: áp dụng công thức nhân số phức
(a+bi)(c+di)=(ac−bd)+(ad+bc)i

operator/
Input: 2 số phức hiện tại và b
Output: số phức mới là thương của 2 số phức
Ý tưởng giải thuật: tính mẫu số c^2+d^2, sau đó sử dụng công thức chia số phức:
(a+bi)/(c+di) = (a*c+b*d)/(c^2+d^2) + (b*c - a*d)/(c^2 +d^2)i

operator==
Input: 2 số phức hiện tại và b
Output: true nếu hai số phức bằng nhau, ngược lại false
Ý tưởng giải thuật: so sánh phần thực và phần ảo của hai số phức

operator!=
Input: 2 số phức hiện tại và b
Output: true nếu hai số phức khác nhau, ngược lại false
Ý tưởng giải thuật: sử dụng kết quả của toán tử == rồi phủ định lại


	​

