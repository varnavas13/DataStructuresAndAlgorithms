class Solution{
public:
    long long int factorial(int N){
        long long int n=1;
        for(int i=2;i<=N;++i)
        n*=i;
        return n;
    }
};