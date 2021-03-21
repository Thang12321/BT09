#include <iostream>
using namespace std;
main()
{
     int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;
//giải phóng bộ nhớ quá sớm, ta trỏ p2 đến địa chỉ mà p đang trỏ tới
// vùng nhớ này sẽ mất khi ta thực hiện lệnh "delete p"
// trong khi đó ở dưới ta vẫn dùng *p2 (giá trị của vùng bộ nhớ vừa bị xóa)
// Khi ta giải phóng p thì sẽ khiến p2 trỏ vào vùng bộ nhớ không còn hiệu lực
*p2 = 100;
 cout << *p2;
 delete p2;
 // Giải phóng vùng bộ nhớ đã được giải phóng

}
