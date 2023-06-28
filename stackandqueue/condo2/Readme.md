Anh còn nhớ con đò xưa
Nhớ dòng sông mênh mông thuở ấy
Mùi hương cây trái chín trong vườn
(Vy Nhật Tảo)

Từ xa xưa, hình ảnh con đò bến nước đã đi vào trong thi ca và trong tâm tưởng dân tộc. Hình ảnh con đò ngày ngày đưa khách sang sông in đậm trong tâm trí nhiều người và đôi khi còn được dùng để so sánh với nghề dạy học.

Mở rộng hình ảnh của những con đò chính là những chiếc phà, không chỉ chở được khách mà còn chở được cả xe của khách sang sông. Phà là một loại tàu lớn, có 2 đầu y như nhau, xe chạy lên ở một đầu và chạy xuống ở đầu kia. Mỗi đầu của phà tương ứng với một bờ của con sông, phà luôn luôn cập đầu bên phải và bờ bên phải và ngược lại, không bao giờ đổi đầu nhằm tối ưu thời gian chuyên chở.

Trên con sông kia có một chiếc phà dài l mét hàng ngày chở khách qua sông. Bỗng một hôm phà bị hư phải nằm sửa ở tả ngạn con sông, xe đến không qua được sông xếp thành hàng dài hai bên bờ bấm kèn inh ỏi nhức óc đinh tai. Một sinh viên UIT bị kẹt trong hàng xe dài đằng đẵng kia quyết định giết thời gian bằng cách viết một chương trình tính toán số lần phà sẽ phải chạy để đưa hết hàng xe đang đợi qua sông khi nó hoạt động trở lại. Hãy giúp bạn ấy.

# Input
Mỗi test bắt đầu bằng hai con số nguyên 1≤l≤500 và 1≤m≤10000. Trong dó l là chiều dài của phà (tính bằng mét) và m là số lượng xe đang kẹt hai bên bờ.

m dòng tiếp theo, đại diên cho các xe đang chờ phà theo đúng thứ tự. Mỗi dòng chứa ba thông tin là lượt là chiều dài xe (tính bằng centimét và là một số nguyên dương không quá 100000), loại xe, và vị trí của bờ mà xe đang đậu (biểu diễn bằng một trong hai chuỗi left và right.

Trong đó loại xe có 5 loại là xe thường, xe cảnh sát, xe quân sự, xe chữa cháy, xe cứu thương. Mỗi loại xe có độ ưu tiên khác nhau, xe có độ ưu tiên thấp sẽ không bao giờ được lên phà trước xe có độ ưu tiên cao hơn, còn giữa hai xe có cùng độ ưu tiên thì chiếc nào tới trước lên trước. Thông tin về loại xe được cho bằng một chuỗi tiếng Anh với độ ưu tiên từ thấp tới cao lần lượt là: civilian, police, army, fire, ambulance

# Output
Số lượt qua sông phà phải chạy để chở hết số xe trên

# VÍ DỤ
| Input                                             | Ouput |
|---------------------------------------------------|-------|
| 	20 4
	380 army left
	720 civilian left
	1340 army right
	1040 civilian leftt |  3 |
|15 4
	380 fire left
	720 police left
	1340 fire right
	1040 fire left |3 |
| 15 4
	380 fire left
	720 army left
	1340 police left
	1040 army left | 5 |