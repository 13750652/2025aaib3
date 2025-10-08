///week05-3.cpp
///Part3:stringstream 斷字
///CPE這次的第二題
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
        string word; ///用來斷字
        while( ss >> word){
            reverse(word.begin(),word.end() );
            cout << " " <<word;
        }
        cout << endl;
        ///cout << line << endl; ///先隨便印出來
    }
}

