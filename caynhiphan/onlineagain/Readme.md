Khi làm việc với yêu cầu tìm kiếm, chúng ta có thể sử dụng thuật toán tìm kiếm nhị phân. Tuy nhiên thuật toán tìm kiếm nhị phân chỉ có thể chạy trên cấu trúc dữ liệu mảng và mảng đó phải được sắp xếp thứ tự. Việc sắp xếp thường có độ phức tạp khá cao, điển hình là trong trường hợp sau đây:

Giả định công ty NaViGame đang duy trì một hệ thống server rất lớn đáp ứng cho hàng chục triệu acccount của các game thủ. Hệ thông server này duy trì một danh sách các game thủ đang online cho phép nhà quản trị có thể kiểm tra xem một game thủ bất kỳ nào đó có đang online hay không. Hãy giúp công ty NaViGame xây dựng module kiểm tra game thủ online này.

# INPUT
Mỗi dòng của input chứa hai con số a và b. Số a có giá trị là 1 hoặc 2 đại diện cho hai tình huống là có game thủ đăng nhập vào hệ thống và người quản trị vừa nhập một yêu cầu kiểm tra. Số b là mã số của game thủ trong tình huống đó (giá trị b không quá 1 tỷ).

Ví dụ như dòng: 1 565481 cho biết game thủ với mã số 465481 vừa mới đăng nhập vào hệ thống

dòng: 2 87126 cho biết người quản trị muốn kiểm tra xem game thủ với mã số 87126 có đang online trong hệ thống hay không.

Input sẽ kết thúc bằng dòng chỉ chứa một số 0.

# OUTPUT
Ứng với mỗi yêu cầu kiểm tra của nhà quản trị xuất ra trên một dòng giá trị 0 nếu game thủ đó không online. Nếu game thủ đang online, xuất ra 1

# VÍ DỤ
Input
1 1

1 2

1 3

2 4

2 1

1 5

0

Output
0

1