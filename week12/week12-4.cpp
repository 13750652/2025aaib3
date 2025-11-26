//week12-4.cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0"; //0ヴ计,常跑Θ0
        int N1 = num1.length(), N2 = num2.length();
        int N = N1 + N2;
        vector<int> ans(N);
        for(int i=N1-1;i>=0;i--){
            for(int j=N2-1;j>=0;j--){
                //nums1[i]nums2[j]穦ans[i+j+1]
                ans[i+j+1] += (num1[i]-'0') *(num2[j]-'0'); //癸
                if(ans[i+j+1]>9){
                    ans[i+j] += ans[i+j+1] /10; //秈
                    ans[i+j+1] = ans[i+j+1] %10; //痙緇计
                }
            }
        }
        string strAns = ""; //秨﹍﹃ぐ或常⊿Τ
        if(ans[0]==0){
            for(int i=1;i<N;i++)strAns += (char)(ans[i]+'0');
        }else{
            for(int i=0;i<N;i++)strAns += (char)(ans[i]+'0');
        }
        return strAns;
    }
};
