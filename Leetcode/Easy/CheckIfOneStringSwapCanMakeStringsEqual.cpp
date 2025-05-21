class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
         int cnt=0;
        int indx1,indx2;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
                if(cnt==1)
                {
                    indx1=i;
                }
                else if(cnt==2)
                {
                    indx2=i;
                }
            }
        }
        if(cnt>2)
        return false;
        if(cnt==0)
        return true;
        if(cnt==2)
        {
            char temp=s1[indx1];
            s1[indx1]=s1[indx2];
            s1[indx2]=temp;
            return s1==s2;
        }
        return false;
    }
};
