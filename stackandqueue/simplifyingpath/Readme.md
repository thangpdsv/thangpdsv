Trên các hệ điều hành họ Unix (Unix-like OS) như MacOS, solaris, Linux, BSD, v.v... cả hệ thống chỉ có duy nhất một thư mục gốc, ký hiệu là / và mỗi thư mục mặc định có 02 thư mục con ký hiệu là . Và .. Trong đó dấu chấm (.) là ký hiệu đại diện cho thư mục hiện tại và hai dấu chấm (..) là ký hiệu đại diện cho thư mục cha của thư mục hiện tại. Hệ thống này cho phép nhiều cách đặt đường dẫn cực kỳ linh hoạt. Tuy nhiên xử lý các đường dẫn này đòi hỏi sự xử lý tính toán. Ví dụ

"/home/" => "/home"
"/a/./b/../../c/" => "/c"

Hãy viết chương trình xử lý thu gọn đường dẫn.

# INPUT
Input gồm nhiều dòng, mỗi dòng là một chuỗi chứa đường dẫn cần xử lý, trên hệ thống Unix các bạn có thể yên tâm là đường dẫn sẽ không chứa khoảng trắng.

Input kết thúc bằng một dòng chỉ chứa chuỗi “END”

# OUTPUT
Ứng với mỗi đường dẫn, xuất ra trên một dòng đường dẫn sau khi rút gọn

# VÍ DỤ
| Input                                             | Ouput |
|---------------------------------------------------|-------|
| /.././.Wp7///// |   /.Wp7    |
| /.././.Wp7/////..o./...//.././//J24OQ9../ | /.Wp7/..o./J24OQ9.. |
| /.././.Wp7/////..o./...//.././//J24OQ9../6ySUHH/. | /.Wp7/..o./J24OQ9../6ySUHH |
| /.././.Wp7/////..o./...//.././//J24OQ9../6ySUHH/./......///7Qrfai/7mv./../r./ | /.Wp7/..o./J24OQ9../6ySUHH/....../7Qrfai/r. |
| /.././.Wp7/////..o./...//.././//J24OQ9../6ySUHH/./......///7Qrfai/7mv./../r././.../.../Ew4..../..../ | /.Wp7/..o./J24OQ9../6ySUHH/....../7Qrfai/r./.../.../Ew4..../.... |
| /.././.Wp7/////..o./...//.././//J24OQ9../6ySUHH/./......///7Qrfai/7mv./../r././.../.../Ew4..../..../...1H.././/l7IVDjG/.//...///..../ | /.Wp7/..o./J24OQ9../6ySUHH/....../7Qrfai/r./.../.../Ew4..../..../...1H../l7IVDjG/.../.... |
| /.././.Wp7/////..o./...//.././//J24OQ9../6ySUHH/./......///7Qrfai/7mv./../r././.../.../Ew4..../..../...1H.././/l7IVDjG/.//...///....//ghS0./6......./// | /.Wp7/..o./J24OQ9../6ySUHH/....../7Qrfai/r./.../.../Ew4..../..../...1H../l7IVDjG/.../..../ghS0./6....... |
| /.././.Wp7/////..o./...//.././//J24OQ9../6ySUHH/./......///7Qrfai/7mv./../r././.../.../Ew4..../..../...1H.././/l7IVDjG/.//...///....//ghS0./6.......////..///p9mRJyj/z6oFdZ/././......//..///.///...../ | /.Wp7/..o./J24OQ9../6ySUHH/....../7Qrfai/r./.../.../Ew4..../..../...1H../l7IVDjG/.../..../ghS0./p9mRJyj/z6oFdZ/..... |
| END   | |