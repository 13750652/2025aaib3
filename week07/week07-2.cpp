// week07-2.cpp
//"U" up 往上, "D" down往下, "L" left往左, "R" right往右
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; //一開始的位置(0,0)
        //for(int i=0; i<moves.length();i++){ //傳統for迴圈
        //   char c = movies[i]; //取出字串裡第i個字母
        for(char c : moves){ //C++進階迴圈
            if ( c=='U'){
                y++;
            } else if(c=='D'){
                y--;
            } else if(c=='L'){
                x--;
            } else if(c=='R'){
                x++;
            }
        } //離開迴圈後
        if( x==0 && y==0)return true;
        else return false;
    }
};
