#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int> &prices){
        int profit = 0;
        int buy = prices[0];
        for(int i = 0; i< prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            else{
                profit = max(profit, prices[i] - buy);
            }
        }
        return profit;
    }
};

int main(){
    vector<int> prices = {2,1,3,5,6};
    Solution sol;
    int result = sol.maxProfit(prices);
    cout << "The maximum profit is: "<< result<<endl;
}
