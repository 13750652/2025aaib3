///week07-1b.cpp 二合一
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
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n; ///Step01:Input

    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j>1)cout << " ";
            int d = max(abs(i-n),abs(j-n));
            cout << d+1;
        }
        cout << endl; ///Step02: Output跳行
    }
}
