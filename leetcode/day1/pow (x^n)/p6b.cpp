#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    double myPow(double x, int n){
       return pow(x,n);
    }
};

int main(){
    double base = 2.0;
    int exponent = 3;
    Solution sol;
    double result = sol.myPow(base,exponent);
    cout << "The value of base " << base << " to the power " << exponent << " is: " << result;  
    return 0;
}

