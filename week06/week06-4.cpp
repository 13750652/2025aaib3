//week06-4.cpp
//num陣列裡,數字有些會有增加,請問有沒有2個相鄰
//ex. 2,5,7,8,9,2,3,4,3,1
//combo 1 2 3 4 6 1 沒有比較大,就不會增加,用原來的值1
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        //使用玩遊戲常見的combo連續
        int N = nums.size(); //陣列大小
        vector<int> combo(N,1); //有N格,裡面都放1
        for(int i=1; i<N; i++){
            if( nums[i-1] < nums[i] ) combo[i] = combo[i-1] + 1;
        } //變出combo陣列裡面全部的值,有合格,就比前一項+1
        //要檢查相鄰兩個長度為k的陣列,combo值夠不夠 k個連續
        for(int i=0;i<N-k;i++){
            if(combo[i]>=k && combo[i+k]>=k) return true;
        }
        return false;
    }
};
