//week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss (s); //把字串string當iostream的cin來用
        string word; //字串
        //ss >> word; //
        //ss >> word; //讀第二次,會讀到第2個字
        while( ss >> word ){
            //裡面什麼事都沒做
        }
        cout << word; //先做一個實驗,看讀到誰
        return word.length();//最後,把長度送出去
    }
};
