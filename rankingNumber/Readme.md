Khi tổng kết xếp hạng mà có nhiều đối tượng trùng điểm nhau thì chắc chắn thứ hạng của các đối tượng đó phải giống nhau. Cách cổ điển nhất để đánh thứ hạng trong trường hợp này là cho các đối tượng cùng điểm số đồng hạng với nhau và các thứ hạng sau sẽ được để trống. Ví dụ với 4 đối tượng lần lượt được điểm 10, 9, 9, 8 thì thứ hạng tương ứng sẽ là 1, 2, 2, 4 (không có hạng 3). Tuy trong toán học thống kê chúng ta còn nhiều phương pháp xếp hạng khác nhưng cách xếp hạng cổ điển này vẫn được dùng nhiều trong đời sống

Hãy viết chương trình thực hiện xếp thứ hạng cho các phần tử trong mảng số nguyên dựa trên giá trị của chúng

# INPUT
Một con số n (cho trước giới hạn sinh viên KHÔNG CẦN PHẢI kiểm tra giá trị n) là độ dài của mảng. n số tiếp theo trong input mỗi số có giá trị trong khoảng từ 0 đến 1000 là giá trị các phần tử trong mảng

# OUTPUT
Hai số a, b. Với a là giá trị của phần tử có nhiều phần tử đồng hạng với nó nhất, nếu có nhiều phần tử như vậy thì in ra phần tử có giá trị lớn nhất. Và b là thứ hạng của phần tử xếp hạng chót trong mảng (thứ hạng to nhất)

# VÍ DỤ
| Input                                             | Ouput |
|---------------------------------------------------|-------|
| 16 <br /> 9 2 3 4 5 1 8 5 6 7 2 3 4 5 2 3                | 5 16  |
| 17 <br /> 5 5 5 7 14 16 18 22 25 25 27 28 28 31 35 44 50 | 5 15  |
