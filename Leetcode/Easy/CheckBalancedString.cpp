class Solution {
public:
    bool isBalanced(string num) {
        int sm1=0,sm2=0;
        for(int i=0;i<num.size();i++)
        {
            if(i%2==0)
            sm1+=num[i]-'0';
            else
            sm2+=num[i]-'0';
        }
        return sm1==sm2;
    }
};