Cài đặt cấu trúc dữ liệu stack với các thao tác push, pop, peek. (isEmpty không nói nhưng dĩ nhiên cũng cần thiết khi thực hiện các thao tác kia)

# INPUT
Mỗi dòng trong input sẽ có một trong 4 dạng sau:

Bắt đầu bằng số 1, theo sau là số nguyên n. Đây là thao tác thêm n vào queue (push)

Bắt đầu bằng số 2, đây là thao tác xóa phần tử ở đỉnh queue (pop)

Bắt đầu bằng số 3, đây là thao tác xem giá trị phần tử trong queue nhưng không lấy ra khỏi satck (peek)

Bắt đầu bằng số 4, dòng này báo hiệu input kết thúc

# OUTPUT
Ứng với thao tác pop và peek, xuất ra màn hình trên một dòng giá trị phần tử ở đỉnh queue, nếu queue rỗng, xuất ra chuỗi “EMPTY”. Ứng với thao tác PUSH, xuất chữ "pushed".

Sau đó khi thực hiện xong mỗi thao tác và xuất ra theo yêu cầu trên. Tiếp tục xuất các phần tử trong stack trên một hàng, sau chữ "STACK: ", đỉnh của stack nằm ở bên trái.

# VÍ DỤ
| Input                                             | Ouput |
|---------------------------------------------------|-------|
| 1 2 <br> 2 <br> 2 <br> 1 8 <br> 3 <br> 1 8 <br>2 <br>2 <br> 3 <br> 1 5 <br> 1 4 <br> 2 <br> 3 <br> 1 3 <br>3<br>2<br>3<br>3<br>1 2<br>3<br>3<br>2<br>3<br>2<br>2<br>2<br>1<br>5<br>2<br>3<br>1 1<br>3<br>1 2<br>3<br>2<br>1 3<br>1 4<br>3<br>1 4<br>2<br>4 | pushed<br>STACK: 2<br>2<br>STACK:<br>EMPTY<br>STACK:<br>pushed<br>STACK: 8<br>8<br>STACK: 8<br>pushed<br>STACK: 8 8<br>8<br>STACK: 8<br>8<br>STACK:<br>EMPTY<br>STACK:<br>pushed<br>STACK: 5<br>pushed<br>STACK: 4 5<br>4<br>STACK: 5<br>5<br>STACK: 5<br>pushed<br>STACK: 3 5<br>3<br>STACK: 3 5<br>3<br>STACK: 5<br>5<br>STACK: 5<br>5<br>STACK: 5<br>pushed<br>STACK: 2 5<br>2<br>STACK: 2 5<br>2<br>STACK: 2 5<br>2<br>STACK: 5<br>5<br>STACK: 5<br>5<br>STACK:<br>EMPTY<br>STACK:<br>EMPTY<br>STACK:<br>pushed<br>STACK: 5<br>5<br>STACK:<br>EMPTY<br>STACK:<br>pushed<br>STACK: 1<br>1<br>STACK: 1<br>pushed<br>STACK: 2 1<br>2<br>STACK: 2 1<br>2<br>STACK: 1<br>pushed<br>STACK: 3 1<br>pushed<br>STACK: 4 3 1<br>4<br>STACK: 4 3 1<br>pushed<br>STACK: 4 4 3 1<br>4<br>STACK: 4 3 1 |