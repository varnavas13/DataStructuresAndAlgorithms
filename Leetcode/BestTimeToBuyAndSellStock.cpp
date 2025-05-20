class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mn=prices[0];
        for(int i=1;i<prices.size();++i)
        {
            if(prices[i]<mn)
            mn=prices[i];
            ans=max(ans,max(0,(prices[i]-mn)));
        }
        return ans;
    }
};
