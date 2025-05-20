class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_set<int>a,b,ab;
        vector<int>ans;

        for(int i=0;i<A.size();i++)
        {
            a.insert(A[i]);
            b.insert(B[i]);
            ab.insert(A[i]);
            ab.insert(B[i]);
            ans.push_back(a.size()+b.size()-ab.size());
        }
        return ans;
    }
};
