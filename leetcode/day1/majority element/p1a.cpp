//majority element problem

// brute force

#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>&nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(nums[j] == nums[i]){
                count++;
            }
        }
        if(count > n/2){
            return nums[i];
        }
    }
    return -1; 
}

int main(){
    vector<int> nums = {2,2,1,1,2,2,2};
    

    if(majority != -1){
        cout << "The majority element is: " << majority << endl;
    }
    else{
        cout << "There is no majority element." << endl;
    }

}