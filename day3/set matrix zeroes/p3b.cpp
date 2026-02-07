#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void setZeroes(vector<vector<int>>& matrix){
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,-1);
        vector<int> col(m,-1);

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                if(matrix[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(row[i] == 0 || col[j] == 0){
                    matrix[i][j] = 0;
                }
            }
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