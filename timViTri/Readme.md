Viết chương trình tìm kiếm một số trong mảng tăng dần với yêu cầu như sau:

# INPUT
Dòng đầu tiên chứa số n (không quá một triệu), là số phần tử trong mảng

Dòng thứ hai chứ n số nguyên dương (không quá một tỷ), cách nhau bởi khoảng trắng, đây là các phần tử của mảng

Dòng thứ ba chưa số m (không quá một triệu), đây là số lượng số cần phải tìm.

Dòng cuối cùng của input chứa m số nguyên dương x1, x2, ..., xm, giá trị mỗi số không quá một tỷ. Đây là các số cần tìm.

# OUPUT
Ứng với mỗi số cần tìm, xuất ra trên một dòng vị trí của số đó trong mảng. Quy ước số đầu tiên của mảng có vị trí là 0 và nếu số cần tìm không có trong mảng xuất ra -1. Nếu số cần tìm xuất hiện ở nhiều vị trí trong mảng, xuất ra vị trí ở gần phía cuối mảng nhất. Lưu ý là trong mảng có thể có những số lặp đi lặp lại CỰC KỲ NHIỀU lần.

# VÍ DỤ
| Input                                             | Ouput |
|---------|-------|
|7 <br> 5 7 8 8 12 16 19 <br> 6 <br> 8 1 0 8 3 16  | 	3 <br> -1 <br> -1 <br> 3 <br> -1 <br> 5 |
