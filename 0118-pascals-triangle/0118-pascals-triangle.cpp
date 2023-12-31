class Solution {
    public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; // SC: O(n^2)

        for(int i = 0; i < numRows; i++) { // TC: O(n^2)
            vector<int> temp(i+1); // SC: O(n)

            temp[0] = 1;
            for(int j = 1; j < i; j++) {
                temp[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            if(i != 0) {
                temp[i] = 1;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};