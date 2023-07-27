class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
                int pt2=i+1;
                int pt3=nums.size()-1;
                while(pt2<pt3)
                {
                    int sum=nums[i]+nums[pt2]+nums[pt3];
                  if(sum>0)
                    {
                        pt3--;
                    }else if(sum<0)
                    {
                        pt2++;
                    }
                    else
                    {
                        vector<int> ans1;
                        ans1.push_back(nums[i]);
                        ans1.push_back(nums[pt2]);
                        ans1.push_back(nums[pt3]);
                        
                        ans.push_back(ans1);
                        pt2++;
                        pt3--;
                        
                        while(pt2<pt3&&nums[pt2]==nums[pt2-1])
                        {
                            pt2++;
                        }
                        while(pt2<pt3&&nums[pt3]==nums[pt3+1])
                        {
                            pt3--;
                        }
                    }
                }
            
        }
        
        return ans;
        
        
    }
    
};