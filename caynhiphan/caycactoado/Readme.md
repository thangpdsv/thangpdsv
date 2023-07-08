Viết chương trình tạo cây nhị các điểm trên tọa độ "Đề các" (Cartesian coordinate system) với quy tắc như sau

Nếu điểm đang thêm trùng với node gốc thì bỏ không thêm.
Nếu điểm đó nằm ở góc phần tư thứ 1 so với gốc của cây thì thêm vào nhánh trái
Nếu điểm đó nằm ở góc phần tư thứ 2 so với gốc của cây thì thêm vào nhánh phải
Nếu điểm đó nằm ở góc phần tư thứ 3 hoặc 4 so với gốc cảu cây thì thêm điểm đó vào làm cha của node gốc, node gốc sẽ nằm bên trái hay bên phải thì quyết định theo các quy tắc 2 và 3
Nếu điểm nằm ở ranh giới giữa 02 góc phần tư, thì ưu tiên cho góc phần tư NẰM TRƯỚC theo chiều kim đồng hồ

Sau khi tạo xong cho biết chiều cao của cây và kết quả duyệt cây theo thứ tự pre-order NLR

# Input
Một danh sách các điểm. Mỗi điểm gồm hai số nguyên dương trên một hàng, tương ứng với hoành độ và tung độ.

Input kết thúc bằng một dòng chỉ chứa số 0

# Output
Dòng đầu tiên chứa chiều cao của cây

Dòng sau đó chứa kết quả duyệt cây. Xem ví dụ để biết cách xuất một điểm.

# Ví dụ
| Input                                             
|---------------------------------------------------
| 4 3 
8 2
3 7
3 1
2 7
5 4
2 2
2 1
4 2
7 5
4 2
1 1
3 7
5 7
2 6
2 4
6 2
1 5
8 1
7 8
3 8
4 8
2 3
3 7
8 6
0
| Ouput |
| 10 |

 (1, 5) (3, 8) (4, 8) (7, 8) (3, 7) (8, 6) (1, 1) (2, 7) (3, 7) (5, 7) (3, 1) (4, 3) (8, 2) (2, 6) (2, 4) (2, 3) (2, 2) (4, 2) (5, 4) (7, 5) (6, 2) (2, 1) (8, 1)  |
| 8 2
6 5
8 7
8 1
5 5
1 5
3 1
6 7
5 3
6 6
4 6
6 7
1 7
0 | 9 
 (1, 7) (1, 5) (4, 6) (6, 7) (5, 5) (6, 7) (6, 6) (6, 5) (8, 7) (8, 2) (8, 1) (3, 1) (5, 3) |

