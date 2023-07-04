class Solution {
    private:
   vector<int> Solution::repeatedNumber(const vector<int> &A) {
    map<int,int > mpp;
        int n=A.size();
        
        for(int i=0<;i<n;i++)
        {
            mpp[i]=0;
        }
    
     for(auto v: A)
     {
         mpp[v]++;
     }
     
     vector<int> res(2,0);
     
     for(auto x:mpp)
     {
         if(mpp[x]==2)
         {
             res[0]=x;
         }
         
         if(mpp[x]==0)
         {
             res[1]=x;
         }
         
         
     }
     
     return res;
}
};