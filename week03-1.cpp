///week03-1.cpp
///C++�}�C
#include <iostream>
#include <vector> ///�}�Cvector
using namespace std;
int main()
{
    cout<<"�п�J4�ӼƦr: ";
    vector<int> a; ///���Y�ۦp���}�C

    int now;
    for(int i=0;i<4;i++){
        cin>>now;///�{�b��J�@�ӼƦr
        a.push_back(now);
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }

    cout<<"�{�b�{���X��,�S���J99 88��ӼƦr,���G�O?\n";

    a.push_back(99);///����a���᭱
    a.push_back(88);

    for(int i=0;i<a.size();i++){
        cout <<a[i]<<' ';///�Ʀr�᭱���Ů�
    }
}
