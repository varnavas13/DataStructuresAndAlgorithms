// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {

        d = abs(d);
        
        int N = 1;
        
        while(!(d <= N*(N+1)/2 && (d & 1) == ((N*(N+1)/2) & 1)))
            N++;
        
        return N;

    }
};