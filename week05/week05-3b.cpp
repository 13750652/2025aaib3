///week05-3.cpp
///Part3:stringstream �_�r
///CPE�o�����ĤG�D
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while (getline(cin, line)){
        ///Part 2: Output
        stringstream ss(line);
        string word; ///�Ψ��_�r
        while( ss >> word){
            reverse(word.begin(),word.end() );
            cout << " " <<word;
        }
        cout << endl;
        ///cout << line << endl; ///���H�K�L�X��
    }
}

