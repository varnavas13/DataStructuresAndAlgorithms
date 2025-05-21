class Solution {
public:
    string smallestPalindrome(string s) {
        int arr[26]={};
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        string temp="";
        char tempChar='#';
        for(int i=0;i<26;i++)
        {
            for(int k=0;k<arr[i]/2;k++)
            temp+=('a'+i);
            if(arr[i]%2==1)
            tempChar=('a'+i);
        }
        string ans=temp;
        reverse(temp.begin(),temp.end());
        if(tempChar!='#')
        ans+=tempChar;
        ans+=temp;
        return ans;

    }
};
