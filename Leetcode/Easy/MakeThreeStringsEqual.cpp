class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int temp1=0;
        for(int i=0;i<min(s1.size(),s2.size());i++)
        {
            if(s1[i]!=s2[i])
            break;
            temp1++;
        }
        int temp2=0;
        for(int i=0;i<min(temp1,(int)s3.size());i++)
        {
            if(s1[i]!=s3[i])
            break;
            temp2++;
        }
        int mn=min(temp1,temp2);
        return mn==0 ? -1: s1.size()+s2.size()+s3.size()-3*mn;
    }
};