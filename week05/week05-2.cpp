///week05-2.cpp
///搞懂stringstream
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string line;///準備放"一整行"的字串
    getline ( cin, line ); ///一次讀入一整行
    cout << line << endl;

    stringstream ss(line); ///新的把string變成stream
    string word;
    while( ss >> word ){
        cout << "ss讀到一個字: " << word << endl;
    }
}
