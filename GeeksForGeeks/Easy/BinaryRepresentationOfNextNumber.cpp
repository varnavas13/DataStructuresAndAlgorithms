class Solution {
public:
    string binaryNextNumber(string s) {
     int l = s.size();
    int i;
    for (i = l - 1; i >= 0; i--) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
            break;
        }
 
        else
            s.at(i) = '0';
    }
   
    if (i < 0)
        s = "1" + s;
    bool add=false;
    string ans="";
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='1'&&add==false)
        {
            ans+='1';
            add=true;
        }
        else if(add)
        ans+=s[i];
    }
    return ans;
    
    }
    };