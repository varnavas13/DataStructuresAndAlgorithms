class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,bool> ban;
        for(int i=0;i<banned.size();i++)
        ban[banned[i]]=true;
        int cnt=0,sm=0;
        for(int i=1;i<=n;i++)
        {
            if(!ban[i]&&i+sm<=maxSum)
            {
                sm+=i;
                cnt++;
            }
        }
        return cnt;
    }
};