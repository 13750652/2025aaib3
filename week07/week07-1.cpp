///week07-1b.cpp �G�X�@
///TAICA NYCU������q �j�ǹq���t �����ҲĤ��D
///Input:1-9���Ʀr Output:¶��骺���
///ex. Input:3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �@���h
///Input 2 ��3�h, Input 3 ��5�h, Input 4 ��7�h, Input 5 ��9�h
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
        cout << endl; ///Step02: Output����
    }
}
