//week03-4b.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; //nums[k++] = nums[i]
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) nums[k++] = nums[i];
        } //有"不是0的數"偷偷備份,塞到答案的後面

        for (int i=k; i<nums.size(); i++){ //再巡一次
            nums[i] = 0; //之後塞0的值
        }
    }
};
