#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int> &prices){
        int n = prices.size();
        int profit = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j <n; j++){
                profit = max(profit, prices[j] - prices[i]);
            }
        }
        return profit;
    }
};

int main(){
    vector<int> prices = {7,2,1,6,3};
    Solution sol;
    int result = sol.maxProfit(prices);
    cout << "The maximum profit is: " <<result;
    return 0;
}