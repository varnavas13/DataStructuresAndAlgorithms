class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
    long long mn = a[0]; 
    long long mx = mn; 

    for (int i = 1; i < n; ++i) {
        if (a[i] < mn) mn = a[i]; 
        if (a[i] > mx) mx = a[i]; 
    }

    return make_pair(mn, mx);
}
};