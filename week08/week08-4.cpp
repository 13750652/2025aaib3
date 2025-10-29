//week08-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; //0:北, 1:東, 2:南, 3:西
        int x = 0, y = 0; //一開始在(0,0)
        instructions = instructions + instructions + instructions + instructions;
        for(char c : instructions){
            if(c=='G'){
                if(d==0) y++;
                if(d==1) x++;
                if(d==2) y--;
                if(d==3) x--;
            } else if(c=='R'){ //往右轉順時針90度
                d = (d+1) % 4;
            } else if(c=='L'){ //往左傳逆時針90度
                d = (d+3) % 4;
            }
        }
        return x==0 && y==0; //結束時,機器人在哪裡?什麼叫"繞圈圈"?
    }
};
