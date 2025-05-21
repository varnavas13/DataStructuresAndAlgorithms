class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        int temp[n];
        for(int i=0;i<n;i++)
        temp[i]=0;
        for(int i=0;i<edges.size();i++)
        {
           temp[edges[i][1]]++;
        }
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i]==0)
            {
                cnt++;
                ans=i;
                if(cnt==2)
                return -1;
            }
        }
        return ans;
    }
};