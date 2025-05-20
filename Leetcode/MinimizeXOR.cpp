class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int cnt1=__builtin_popcount(num1);
        int cnt2=__builtin_popcount(num2);
        if(cnt1==cnt2)
        return num1;
        if(cnt1>cnt2)
        {
            int x=1;
            while(x<=num1)
            {
                x*=2;
            }
            x/=2;
            int ans=0;
            while(cnt2>0)
            {
                if((num1&x)!=0)
                {
                    cnt2--;
                    ans+=x;
                }
                x/=2;
            }
            return ans;
        }
        else
        {
            int cnt=cnt2-cnt1;
            int ans=0;long long temp=1;
            while(cnt>0)
            {
                
                cout<<(num1&temp)<<endl;
                if((num1&temp)==0)
                {
                    ans+=temp;
                    cout<<ans<<endl;
                    cnt--;
                }
                temp*=2;
               
            }
            cout<<ans<<" "<<num1;
            return ans|num1;
        }
    }
};
