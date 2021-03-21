#include <iostream>
using namespace std;
main()
{
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr  <<"a: " << "-" << a << "-" << endl;
cerr  <<"c: " << "-" << c << "-" << endl;
delete c;
cerr  << "a after deleting c:" << "-" << a << "-" << endl;
}
//ở đây, ta giải phóng bộ nhớ của c, điều này là không thể xác định
// nếu muốn giải phóng bộ nhớ, thì ta phải cấp phát bộ nhớ cho con trỏ trước (ví dụ như a)
// xóa bộ nhớ của vùng chưa khởi tạp không đảm bảo chương trình sẽ luôn chạy đúng
