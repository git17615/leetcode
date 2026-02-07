#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lengthOfLargestSubstring(string s){
        int maxLength = 0;
        int n = s.size();

        for(int i = 0; i<n; i++){
            unordered_set<char> charSet;
            //we start with i not i+1 because we need to include the starting character substring as well
            for(int j = i; j < n; j++){
                if(charSet.find(s[j]) != charSet.end()){
                    break;
                }
                charSet.insert(s[j]);
                maxLength = max(maxLength, j - i +1);
            }
        }
        return maxLength;
    }
};

int main(){
    string s = "abcabcbb";
    Solution sol;
    int result = sol.lengthOfLargestSubstring(s);

    cout<<"The length of the largest substring without repeating is: "<< result<< endl;

    return 0;
}