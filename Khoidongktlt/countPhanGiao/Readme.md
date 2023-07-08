Đối với các mạng xã hội, các trò chơi trực tuyến hay các dịch vụ mạng khác có hỗ trợ trao đổi thông tin theo thời gian thực như nhắn tin, gọi điện, v.v... Việc quản lý danh sách người dùng đang online là công việc thiết yếu. Khi có một user online, hệ thống sẽ phải cho user này biết có ai trong số bạn bè của anh ấy cũng đang online. Các bạn hãy viết chương trình cho biết số friend đang online của user X.

# INPUT
Hàng đầu tiên của input chứ m, n (0 < m,n < 400.000). Trong đó m là số lượng người đang online của toàn hệ thống, n là số lượng friend của người dùng đang xét.

Hàng tiếp theo chứa m con số nguyên dương, mỗi số giá trị không quá 1 tỷ và cách nhau bởi khoảng trắng. Đây là các mã số của những người dùng đang online, m số nguyên dương này được xếp theo thứ tự tăng dần và không có mã số nào trùng nhau.

Hàng tiếp theo chứa n con số nguyên dương, mỗi số giá trị không quá 1 tỷ và cách nhau bởi khoảng trắng. Đây là các mã số của bạn bè của user X.

# OUTPUT
Xuất ra trên một dòng số lượng bạn của X đang online

# VÍ DỤ
| Input                                             | Ouput |
|---------------------------------------------------|-------|
| 78 32 <br /> 3 4 6 9 12 15 16 19 20 21 23 26 27 29 31 34 35 36 39 40 42 43 46 49 52 54 55 56 58 59 62 64 65 67 69 70 72 74 75 77 79 82 83 85 87 90 93 96 99 102 105 107 110 113 115 117 119 122 124 125 128 131 134 137 138 139 140 142 145 147 148 149 150 152 153 156 157 160 <br/> 3 59 16 78 67 56 44 13 11 81 74 15 0 34 47 62 72 26 29 19 52 22 86 51 91 84 65 75 2 7 38 42  | 		17|
| 43 90 <br> 1 4 6 9 11 13 16 18 20 22 24 25 26 29 30 32 33 36 39 41 42 43 45 48 50 52 55 57 59 60 61 64 67 70 72 74 76 78 81 82 83 85 86 <br> 199 232 9 48 140 239 173 261 123 234 273 14 108 181 51 60 2 81 144 170 90 106 22 111 83 147 97 216 224 167 214 228 270 252 264 118 10 0 193 11 241 26 267 6 36 64 177 133 49 204 55 69 8 43 80 230 102 74 222 246 156 58 152 130 104 247 255 125 196 200 195 75 186 30 215 29 256 33 219 39 163 160 19 116 92 191 53 145 137 87 | 			18 |
