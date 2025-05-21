class Solution {
public:
    long long coloredCells(int n) {
       long long x=n*(long long)(n-1);
       return 1+2*x;
    }
};
