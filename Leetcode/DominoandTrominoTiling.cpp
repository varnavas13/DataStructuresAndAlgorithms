class Solution {
public:
    int numTilings(int n) {
        vector<long long> amea(n+1,0);
        amea[1]=1;
        if(n==1)
        return amea[1];
        amea[2]=2;
        if(n==2)
        return amea[2];
        amea[3]=5;
        if(n==3)
        return amea[3];
        for(int i=4;i<=n;i++)
        {
            amea[i]=(amea[i-1]*2+amea[i-3])%1000000007;
        }

        
        return amea[n];
    }
};
