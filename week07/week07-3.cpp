//week07-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; //Part4:�n���Ʃ��a�}�C
        for(string op : operations ){ //Part1:C++�i���j��
            cout << "�{�bŪ��F: " << op << "\n"; //Part2
            //Part3:�@��if�P�_�n������
            if(op[0]=='C'){ //�M���̫�@��
                a.pop_back();
            } else if(op[0]=='D'){ //�̫�@��"�ܨ⭿"�A�[��̫᭱
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
            cout << now << " "; //Part2:�ݥL�O��,���@�U�R��
        }
        //���H�Kreturn���@�U�A�g�u������
        return ans;
    }
};
