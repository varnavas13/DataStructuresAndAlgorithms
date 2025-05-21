class Solution {
public:
    int minimumPushes(string word) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_set<char> s;
        int ans=0;
        int arr[26];
        for(int i=0;i<26;i++)
        arr[i]=0;
        for(int i=0;i<word.size();i++)
        {
           
                if(arr[word[i]-'a']!=0)
                ans+=arr[word[i]-'a'];
                else
                {
                    arr[word[i]-'a']=s.size()/8;
                    arr[word[i]-'a']++;
                    ans+=arr[word[i]-'a'];
                    s.insert(word[i]);
                }
            
        }
        return ans;
    }
};