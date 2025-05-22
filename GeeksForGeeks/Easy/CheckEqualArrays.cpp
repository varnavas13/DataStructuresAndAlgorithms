//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int> mpa,mpb;
        for(int i=0;i<N;++i)
        {
            mpa[A[i]]++;
            mpb[B[i]]++;
        }
        for(int i=0;i<N;++i)
        {
            int x=A[i];
            if(mpa[x]!=mpb[x])
            return false;
        }
        return true;
    }
};