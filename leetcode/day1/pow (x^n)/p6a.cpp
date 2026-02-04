#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double myPow(double x,int n){
        double ans = 1;
        long long N = abs((long long)n); 
        for(long long i = 0; i < N; i++){
            ans *= x;
        }
        return n<0 ? 1/ans: ans;

    }
};

int main(){
    int exponent = 5;
    double base = 2.0;
    Solution sol;
    double result = sol.myPow(base,exponent);

    cout << "The result of "<< base << " to the power " <<exponent<<" is:" << result << endl;
    return 0;
}
