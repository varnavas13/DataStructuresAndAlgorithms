class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(int i=0;i<answers.size();i++)
        mp[answers[i]]++;
        int ans=0;
        for(int i=0;i<answers.size();i++)
        {
            if(mp[answers[i]]!=0)
            {
                int cnt=mp[answers[i]];
                float temp=(float)cnt/(answers[i]+1);
                ans+=(ceil(temp)*(answers[i]+1));
                mp[answers[i]]=0;
            }
        }
        return ans;
    }
};
