class Solution {
    
    private:
       void allper(vector<vector<int>> &ans,vector<int> nums,int i)
       {
           if(i==nums.size())
           {
               ans.push_back(nums);
               return;
           }
           else
           {
               for(int j=i;j<nums.size();j++)
               {
                   swap(nums[i],nums[j]);
                   allper(ans,nums,i+1);
               }
           }
       }
    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        allper(ans,nums,0);
        return ans;
    }
};