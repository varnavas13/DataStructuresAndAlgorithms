// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        int ek=n/100;
        int mon=n%10;
        int dek=n%100;
        dek/=10;
        if(ek*ek*ek+mon*mon*mon+dek*dek*dek==n)
        return "true";
        return "false";
    }
};