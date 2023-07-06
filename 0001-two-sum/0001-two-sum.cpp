class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size();
        int ft,sn;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                ft=i;
                sn=mpp[target-nums[i]];
            }
            else
            {
                mpp.insert({nums[i],i});

            }
            

        }
        vector<int> v={ft,sn};
        return v;
    }
};