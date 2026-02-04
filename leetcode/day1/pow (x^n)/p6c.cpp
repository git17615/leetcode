#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double helperFunction(double x, long long N){
        if(N == 0) return 1;
        double temp = helperFunction(x,N/2);
        temp *= temp;
        return (N%2 == 0)? temp:temp*x;
    }

    double myPow(double x, int n){
        long long N = abs((long long)n);
        double ans = helperFunction(x,n);
        return n<0? 1/ans : ans;
    }
};

int main(){
    double base = 2.0;
    int exponent = 3;
    Solution sol;
    double result = sol.myPow(base,exponent);
    cout << "The result of the base " << base << "to the powerof the exponent " <<exponent<< " is: "<<result;
    return 0;
}