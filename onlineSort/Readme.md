Thuật toán mang tính online (online algorithm - chữ online có người dịch là trực tiếp, có người dịch là trực tuyến nên tốt nhất là để nguyên tiếng Anh) là những thuật toán có khả năng không cần nhận vào toàn bộ input ngay từ đầu mà có thể nhận input theo từng phần và trả về kết quả ngay sau mỗi lần nhận thêm dữ liệu mới. Những thuật toán sắp xếp như vậy có nhiều ứng dụng trong các lĩnh vực ứng dụng thời gian thật khi mà dữ liệu được cập nhật liên tục.

Giả định tình huống công ty NaViGame đang duy trì một hệ thống server rất lớn đáp ứng cho hàng chục triệu acccount của các game thủ. Hệ thông server này duy trì một danh sách các game thủ đang online cho phép nhà quản trị có thể kiểm tra xem một game thủ bất kỳ nào đó có đang online hay không. Hãy giúp công ty NaViGame xây dựng module kiểm tra game thủ online này.

# INPUT
Mỗi dòng của input chứa hai con số a và b. Số a có giá trị là 1 hoặc 2 đại diện cho hai tình huống là có game thủ đăng nhập vào hệ thống và người quản trị vừa nhập một yêu cầu kiểm tra. Số b là mã số của game thủ trong tình huống đó (giá trị b không quá 1 tỷ).

Ví dụ như dòng: 1 565481 cho biết game thủ với mã số 465481 vừa mới đăng nhập vào hệ thống

dòng: 2 87126 cho biết người quản trị muốn kiểm tra xem game thủ với mã số 87126 có đang online trong hệ thống hay không.

Input sẽ kết thúc bằng dòng chỉ chứa một số 0 và sẽ có không quá 10.000.000 game thủ đăng nhập vào hệ thống.

# OUTPUT
Ứng với mỗi yêu cầu kiểm tra của nhà quản trị xuất ra trên một dòng giá trị 0 nếu game thủ đó không online. Nếu game thủ đang online, xuất ra vị trí của game thủ đó trong danh sách các game thủ đang online đã được sắp xếp theo thứ tự tăng dần về mã số (game thủ đang online có mã số nhỏ nhất sẽ nằm ở vị trí số 1 trong danh sách)

*game thủ đăng nhập nhiều lần vẫn chỉ chiếm 1 vị trí duy nhất trong danh sách online.

# VÍ DỤ

| Input                                             | Ouput |
|---------------------------------------------------|-------|
| 1 1 <br>1 2 <br> 1 3 <br> 2 4 <br> 2 1 <br> 1 5 <br> 0| 0 <br> 1  |
| 1 2<br>2 3<br>1 44<br>1 5<br>2 5<br>2 1<br>2 2<br>1 3<br> 0 | 0<br>2<br>0<br>1  |
