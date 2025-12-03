//week13-4.cpp聖誕範例倒數程式
//Letcode My playground可以寫程式(右下角放stdin輸入)
int main() {
    std::cout << "Hello World!\n";
    char c; //每一行有一個英文
    int d; //有一個數字
    int now = 50; //現在刻度是50
    int ans = 0;
    while (cin >> c >> d){
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";

        if(c=='L') now -= d;
        if(c=='R') now += d;

        now = (now % 100 + 100) %100;
        if(now==0)ans++;
        //cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是:" << ans;
}
