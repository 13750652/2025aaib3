///week06-1.cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        //先看字串長度是否相同
        if( s.length() != t.length() ) return false; //不同直接失敗
        // 先把字串 s 的字母 累積一下
        int R[26] = {};
        for(int i=0;i<s.length();i++){
            char c = s[i] - 'a'; //本來小寫但要變成0-25要減

            R[c]++;
        }
        for(int i=0;i<t.length();i++){
            char c = t[i] - 'a';
            R[c]--;
            if(R[c]<0) return false;
        }
        return true;
    }
};
