//week15-2.cpp
class Solution {
public:
    double myPow(double x, long long int n) {
        if(x==1)return 1;
        if(n<0)return myPow(1/x,-n);
        if(n==0)return 1; //所有數的0次方,都是1

        //思考:???的???次方可以切一辦喔
        double half = myPow(x,n/2);
        if(n%2==0)return half * half;
        else return half * half * x;
    }
};
