class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int el=nums[0];
         int ct=1;

         for(int i=1;i<nums.size();i++)
         {
              if(ct==0)
             {
                 el=nums[i];
                 ct++;
                 
             }else if(nums[i]==el)
             {
                 ct++;

             }else
             {
                 ct--;
             }

            
             

         }
         return el;
    }
};