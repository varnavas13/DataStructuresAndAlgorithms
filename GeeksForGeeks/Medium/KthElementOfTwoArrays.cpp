class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        priority_queue<int> pq;
        for(int i=0;i<a.size();i++)
        {
            pq.push(a[i]);
            if(pq.size()>k)
            pq.pop();
            
        }
                for(int i=0;i<b.size();i++)
        {
            pq.push(b[i]);
            if(pq.size()>k)
            pq.pop();
            
        }
        int x=pq.top();
        return x;
    }
};