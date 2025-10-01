///week04-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///伸縮自如的陣列，為初始化大小就是0
    cout << "沒有初始化a的長度是" << a.size() << endl;
    a.push_back(99); ///下面還有很多
    cout << "經過 .push_back() 後 a的長度變" << a.size() << endl;

    vector<int> b(3); ///長度是3
    cout << "b的長度是" << b.size() << endl;
    b.push_back(99);
    for(int i=0;i<b.size();i++) cout << b[i] << ' '; /// 0 0 0 99
    cout << "經過 .push_back() 後 b的長度變長" << endl;

    vector<int> c(3,88);
    for(int i=0;i<c.size();i++) cout << c[i] << ' ';
    cout << "初始化 (3,88)就會是3個99";

    ///上面還有很多,換下一作業
}
