//week09-1.cpp
//  j=0 1 2
//i=0 1,2,3
//i=1 3,2,1
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(),N = accounts[0].size();
        int ans = 0;
        for(int i=0;i<M;i++){
            int now = 0;
            for(int j=0;j<N;j++){
                now += accounts[i][j]; //左手i 右手j
                // 第i人,在第j銀行存的錢
            }
            ans = max(ans,now);
        }
        return ans;
    }
};
