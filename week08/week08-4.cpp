//week08-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0; //0:�_, 1:�F, 2:�n, 3:��
        int x = 0, y = 0; //�@�}�l�b(0,0)
        instructions = instructions + instructions + instructions + instructions;
        for(char c : instructions){
            if(c=='G'){
                if(d==0) y++;
                if(d==1) x++;
                if(d==2) y--;
                if(d==3) x--;
            } else if(c=='R'){ //���k�බ�ɰw90��
                d = (d+1) % 4;
            } else if(c=='L'){ //�����ǰf�ɰw90��
                d = (d+3) % 4;
            }
        }
        return x==0 && y==0; //������,�����H�b����?����s"¶���"?
    }
};
