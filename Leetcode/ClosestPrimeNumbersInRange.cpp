class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
    vector<bool> prime(right + 1, true);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  for (int p = 2; p * p <= right; ++p) {


        if (prime[p] == true) {
            for (int i = p * p; i <= right; i += p)
                prime[i] = false;
        }
    }
    int l1=-1,r1=-1;
    int ans1=-1,ans2;
    int min=right+4;
    for(int i=max(2,left);i<=right;++i)
    {
        if(prime[i]==true&&l1==-1)
        l1=i;
        else if(prime[i]==true)
        {
            if(r1==-1)
            r1=i;
            else
            {
                l1=r1;
                r1=i;
            }
            if(r1-l1<min)
            {
                min=r1-l1;
                ans1=l1;
                ans2=r1;
            }
        }
    }
    vector<int>ans;
    if(ans1==-1)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else
    {
        ans.push_back(ans1);
        ans.push_back(ans2);
    }
    return ans;
    }
};
