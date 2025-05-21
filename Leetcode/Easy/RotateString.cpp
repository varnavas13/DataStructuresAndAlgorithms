class Solution {
public:
    bool rotateString(string s, string goal) {
     goal+=goal;
     int mx=0;
     for(int i=0;i<goal.size()-s.size();++i)   
     {
        int cur=0;
        for(int k=0;k<s.size();++k)
        {
                if(s[k]==goal[i+k])
                cur++;
                else
                break;
        }
        mx=max(cur,mx);
     }
     return mx==s.size();
    }
};