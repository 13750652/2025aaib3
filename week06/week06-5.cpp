//week06-5.cpp
//�D�ظ�3349�ܹ��A�Q�ѵ�k���Ѱݳ̤j�i�઺k
//�Ψ��combo ����k�B�k�쥪,�ֿn�h��
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();
        vector<int> left(N,1);
        vector<int> right(N,1);
        for(int i=1;i<N;i++){
            if(nums[i-1] < nums[i]) left[i] = left[i-1] + 1;
        }//�p�G���s��,�N��s�B�ܧ�j
        for(int i=N-2; i>=0;i--){
            if(nums[i] < nums[i+1]) right[i] = right[i+1] + 1;
        }
        int ans = 0;//�n���̤j��k
        for(int i=0;i<N-1;i++){
            int now = min(left[i],right[i+1]); //�{�b�o�楪��combo �k��combo���ŦX
            if(now>ans) ans = now;
        }
        return ans;
    }
};
