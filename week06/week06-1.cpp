///week06-1.cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        //���ݦr����׬O�_�ۦP
        if( s.length() != t.length() ) return false; //���P��������
        // ����r�� s ���r�� �ֿn�@�U
        int R[26] = {};
        for(int i=0;i<s.length();i++){
            char c = s[i] - 'a'; //���Ӥp�g���n�ܦ�0-25�n��

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
