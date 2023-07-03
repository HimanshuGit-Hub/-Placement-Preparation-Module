class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr=0;
        int mi=prices[0];
        int cost;
        for(int i=1;i<prices.size();i++)
        {
cost=prices[i]-mi;
pr=max(pr,cost);
mi=min(prices[i],mi);
        }

        return pr;
    }
};