class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int index1=0,index2=0;
        while(index1<str1.size()&&index2<str2.size())
        {
            int temp1=str1[index1]-'a';
            int temp2=str2[index2]-'a';
            if(temp1==temp2)
            {
                index1++;
                index2++;
            }
            else if((temp1+1)%26==temp2)
            {
                index1++;
                index2++;
            }
            else
            index1++;
        }
        return str2.size()==index2;
    }
};