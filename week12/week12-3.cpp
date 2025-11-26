//week12.3.cpp
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //排序 又快又好
        //for(int i=nums.size()-1;i>=0;i--){ //用迴圈,到大小都試一次
        //    cout << nums[i] << " "; //印出大到小的數
        for(int i=nums.size()-1;i>=2;i--){
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i]+nums[i-1]+nums[i-2];
            //如果順利 兩邊和大於第三邊 就把我們的周長加起來,當成答案
        }
        return 0;
    }
};
