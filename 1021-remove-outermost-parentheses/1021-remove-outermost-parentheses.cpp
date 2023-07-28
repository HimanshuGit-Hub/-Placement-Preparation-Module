class Solution {
public:
    string removeOuterParentheses(string s) {
        bool alt=false;
        int ct=0;
         string ans="";
        
        for(auto &v:s)
        {
            if(v=='(')
            {
                ct++;
            }
            if(v==')')
            {
                ct--;
            }
            
            if(alt==false)
            {
                if(ct==1)
                {    
                    alt=true;
                    continue;
                    
                }else
                {
                  ans+=v;
                }
            }else
            {
                if(ct==0)
                {
                    alt=false;
                    continue;
                }else
                {
                    ans+=v;
                }
            }
        }
        
        return ans;
        
    }
};