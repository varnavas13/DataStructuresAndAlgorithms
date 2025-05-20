class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()!=2)
        {
            string temp;
            temp.clear();
            for(int i=0;i<s.size()-1;i++)
            {
                int tempnum=s[i]-'0'+s[i+1]-'0';
                tempnum=tempnum%10;
                temp+=('0'+tempnum);
            }
            s=temp;
        }
        return s[0]==s[1];
    }
};
