class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans(prices.size());
        for(int i=0;i<prices.size();++i)
        {
            bool found=false;
            for(int k=i+1;k<prices.size();++k)
            {
                if(prices[i]>=prices[k])
               {
                ans[i]=prices[i]-prices[k];found=true;break;}
            }
            if(!found)
            ans[i]=prices[i];
        }
        return ans;
    }
};
