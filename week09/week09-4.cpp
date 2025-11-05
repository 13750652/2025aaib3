//week09-4.cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top = 0,bottom=M-1, left=0, right=N-1;
        vector<int>ans;
        while (top<=bottom && left <= right){
            for(int j=left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++; //每完成一個方向,就縮收對應的邊界
            if(top>bottom)break;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--; //收縮右邊界
            if(left>right)break;
            for(int j=right;j>=left;j--){ //沿著bottom下邊界
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; //收縮下邊界
            if(top>bottom)break;
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            if(left>right)break;
        }
        return ans;
    }
};
