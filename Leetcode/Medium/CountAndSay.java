class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
     for(int i=1;i<n;i++)
     {
        char temp=ans[0];
        string anstemp="";
        int cnt=1;
        for(int i=1;i<ans.size();i++)
        {
            if(temp!=ans[i])
            {
                anstemp+=to_string(cnt);
                anstemp+=temp;
                cnt=1;
                temp=ans[i];
            }
            else
            {
                cnt++;
            }
        }
        anstemp+=to_string(cnt);
        anstemp+=temp;
        ans=anstemp;
     } 
     return ans;  
    }
};
