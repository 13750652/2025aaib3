//week08-3b.cpp
class Solution {
public:

    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //���j�ظ�,�|��0
        int now = 1;
        int winner = 0;
        for(vector<int> move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now; //a[i][j] = 1; //���aa �Ĥ@�Ӫ��a
            //myPrint(a); //��}�C�L�X��
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now;
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;


            if(now==1)now = 2; //A�U����,�N��A�U
            else now = 1; //B�U����,��A�U
        }

        if(winner==1) return "A";
        else if(winner==2) return "B";
        else if(moves.size()==9) return "Draw"; //�����E�B�~�O����
        else return "Pending"; //����,�٨S�U��,�n��Pending
    }
};
