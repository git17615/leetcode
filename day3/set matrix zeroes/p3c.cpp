#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void setZeroes(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();
        bool col = false;
        for(int i = 0;i<n;i++){
            if(matrix[i][0] == 0){
                col = true;
            }
            for(int j = 1;j <m;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = n-1; i>=0;i--){
            for(int j = m-1; j>0;j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
            if(col) matrix[i][0] = 0;
        }
    }
};

int main() {
    Solution sol;

    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    // Apply setZeroes
    sol.setZeroes(matrix);

    // Print result
    cout << "Matrix after setting zeros:" << endl;
    for(auto &row : matrix){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}