class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
        return nums.size();
        sort(nums.begin(),nums.end());
        int c=1;
        int ans=INT_MIN;
        int i=1;
        for(int i=1;i<nums.size();i++)
        {
            int a=nums[i];
            int b=nums[i-1];
            if((a-b)==1)
            {
               c+=1;
            }
            else if(nums[i]-nums[i-1]==0)
            continue;
            else
            {
               ans=max(ans,c);
               c=1;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};