///week04-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///���Y�ۦp���}�C�A����l�Ƥj�p�N�O0
    cout << "�S����l��a�����׬O" << a.size() << endl;
    a.push_back(99); ///�U���٦��ܦh
    cout << "�g�L .push_back() �� a��������" << a.size() << endl;

    vector<int> b(3); ///���׬O3
    cout << "b�����׬O" << b.size() << endl;
    b.push_back(99);
    for(int i=0;i<b.size();i++) cout << b[i] << ' '; /// 0 0 0 99
    cout << "�g�L .push_back() �� b�������ܪ�" << endl;

    vector<int> c(3,88);
    for(int i=0;i<c.size();i++) cout << c[i] << ' ';
    cout << "��l�� (3,88)�N�|�O3��99";

    ///�W���٦��ܦh,���U�@�@�~
}
