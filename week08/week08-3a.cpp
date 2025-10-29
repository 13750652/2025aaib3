//week08.3a.cpp
class Solution {
public:
    void myPrint(int a[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << a[i]a[j] << " ";
            }
            cout << "\n"
        }
        cout << "\n"
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //有大誇號,會給0
        int now = 1;
        for(vector<int> move : moves){
            int i = move[0], j  move[1];
            a[i][j] = now; //a[i][j] = 1; //玩家a 第一個玩家
            myPrint(a); //把陣列印出來
            if(now==1)now = 2; //A下完後,將換A下
            else now = 1; //B下完後,換A下
        }

        return 'A';
    }
};
