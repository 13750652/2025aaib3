//week15-3.cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //解法很簡單,把s+s的頭 尾各扣一個字母
        //再找找看裡面有沒有s本身
        string s2 = s + s;
        string s3 = s2.substr(1,s2.length()-2); //.substr()子字串,去掉頭尾
        return s3.find(s) != string ::npos; //右邊叫"沒有找到"
    }
};
