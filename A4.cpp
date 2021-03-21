#include <iostream>
using namespace std;
main()
{
    int *x;
    {
 int *a =new int;
 *a=1;

        x=a;
 delete a;
    }

    cout<<x;
cout<<*x;

}
// chương trình có thể chạy hoặc không
// vùng bộ nhớ được khỏi tạo ở biến địa phương
// ta trỏ con trỏ tới vùng nhớ đó và giải phóng vùng nhớ
// chương trình không đảm bảo độ chính xác và không ổn định

