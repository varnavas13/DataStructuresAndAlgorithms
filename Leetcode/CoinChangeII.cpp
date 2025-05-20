class Solution {
public:
    int change(int amounts, vector<int>& coins) {
     vector<uint> amount(amounts+1,0);
        amount[0]=1;
        for(int i=0;i<coins.size();i++)
        {
            for(int j=coins[i];j<=amounts;j++)
            {
                amount[j]+=amount[j-coins[i]];
            }
        }
        return amount[amounts];  
    }
};
