class Solution {
public:
    
    int ub(vector<int> nums,int target,int n)
    {
        if(n==1)
        {
            return 1;
        }
        if(target==nums[nums.size()-1])
            return n;
        int low=0 , high =n-1;
        int ans;
               while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(nums[mid]>target)
            { 
                ans=mid;
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         bool fl=false;
        int n=nums.size();
        int low=0 , high =n-1;
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(nums[mid]>=target)
            { if(nums[mid]==target)
            {
                fl=true;
            }
                ans=mid;
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        vector<int> a;
        
        if(!fl)
        {
            return {-1,-1};
        }else
            {
                a.push_back(ans);
            }
            
      
          a.push_back(ub(nums,target,n)-1);
            
            return a;
    }
};