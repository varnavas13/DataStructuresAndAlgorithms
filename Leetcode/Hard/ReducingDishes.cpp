class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
     sort(satisfaction.begin(),satisfaction.end());
     int ans=0;
     for(int i=0;i<satisfaction.size();i++)
     {
        int temp=0;
        for(int k=i;k<satisfaction.size();k++)
        {
                temp+=((k-i+1)*satisfaction[k]);
                ans=max(ans,temp);
        }
     }
     return ans;   
    }
};