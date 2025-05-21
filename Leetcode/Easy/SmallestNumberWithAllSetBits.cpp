class Solution {
public:
    int smallestNumber(int n) {
     int temp=log2(n);
     return (1<<(temp+1))-1;   
    }
};