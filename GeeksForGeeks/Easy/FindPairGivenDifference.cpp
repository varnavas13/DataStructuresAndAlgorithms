
class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
       unordered_map<int, int> mpp;
    for (int i = 0; i <arr. size(); i++) {
        mpp[arr[i]]++;
     if (x == 0 && mpp[arr[i]] > 1)
            return 1;
    }
 if (x == 0)
        return -1;
 
    for (int i = 0; i <arr. size(); i++) {
        if (mpp.find(x + arr[i]) != mpp.end()) {
                    return 1;
        }
    }
 
    return -1;
    }
};