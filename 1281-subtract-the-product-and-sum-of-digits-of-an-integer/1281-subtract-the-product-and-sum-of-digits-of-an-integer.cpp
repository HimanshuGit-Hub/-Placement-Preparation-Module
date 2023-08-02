class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        int el=0;
        while(n>=1)
        {
           el=n%10;
            pro*=el;
            sum+=el;
            n/=10;
        }
        return pro-sum;
    }
};