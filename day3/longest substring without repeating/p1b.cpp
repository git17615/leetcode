#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lengthOfLargestSubstring(string s){
        int n = s.size();
        int maxLength = 0;
        int left = 0, right = 0;

        unordered_set<char> charSet;

        while(right < n){
            if(charSet.find(s[right]) == charSet.end()){
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left +1);
                right++;
            }
            else{
                charSet.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};

int main(){
    string s = "abcabcbb";
    Solution sol;
    int result = sol.lengthOfLargestSubstring(s);

    cout<< "The length of the largest substring without repeatation is: " << result << endl;
    return 0;
}