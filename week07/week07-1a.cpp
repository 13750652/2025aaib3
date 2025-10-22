///week07-1a.cpp 二合一
///TAICA NYCU陽明交通 大學電機系 期中考第六題
///Input:1-9的數字 Output:繞圈圈的方形
///ex. Input:3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 共五層
///Input 2 有3層, Input 3 有5層, Input 4 有7層, Input 5 有9層
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; ///Step01:Input

    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j>1)cout << " ";
            cout << n;
        }
        cout << "現在是第i樓, i." << i;
        cout << endl; ///Step02: Output跳行
    }
}
