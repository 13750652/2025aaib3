// week07-2.cpp
//"U" up ���W, "D" down���U, "L" left����, "R" right���k
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; //�@�}�l����m(0,0)
        //for(int i=0; i<moves.length();i++){ //�ǲ�for�j��
        //   char c = movies[i]; //���X�r��̲�i�Ӧr��
        for(char c : moves){ //C++�i���j��
            if ( c=='U'){
                y++;
            } else if(c=='D'){
                y--;
            } else if(c=='L'){
                x--;
            } else if(c=='R'){
                x++;
            }
        } //���}�j���
        if( x==0 && y==0)return true;
        else return false;
    }
};
