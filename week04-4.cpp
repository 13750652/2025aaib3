//week04-4.cpp
//只有增加 or 只有減少的陣列，不可以又有增又有減
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] < nums[i]) up = 1;
            if(nums[i-1] > nums[i]) down = 1;
        }
        if(up==1 && down==1) return false; //最後檢查，不可以又增加又減少
        return true;
    }
};
