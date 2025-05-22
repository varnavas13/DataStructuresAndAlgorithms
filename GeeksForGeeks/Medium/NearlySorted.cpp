// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
            int n = arr.size();  

    int pqSz = (n == k) ? k : k + 1; 
    
    priority_queue<int, vector<int>, greater<int>> 
                    pq(arr.begin(), arr.begin() + pqSz);

    int idx = 0;

    for (int i = k + 1; i < n; i++) {
        arr[idx++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while (!pq.empty()) {
        arr[idx++] = pq.top();
        pq.pop();
    }
    }
};