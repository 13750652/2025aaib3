//week07-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; //Part4:要把資料放到a陣列
        for(string op : operations ){ //Part1:C++進階迴圈
            cout << "現在讀到了: " << op << "\n"; //Part2
            //Part3:一堆if判斷要怎麼模擬
            if(op[0]=='C'){ //清掉最後一位
                a.pop_back();
            } else if(op[0]=='D'){ //最後一位"變兩倍"再加到最後面
                a.push_back( a.back()*2);
            } else if(op[0]=='+'){
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);
            } else {
                a.push_back(stoi(op));//Part4: .push_back()
            }
        }
        int ans = 0;
        for(int now : a){
            ans +=now;
            cout << now << " "; //Part2:看他是誰,等一下刪掉
        }
        //先隨便return等一下再寫真的答案
        return ans;
    }
};
