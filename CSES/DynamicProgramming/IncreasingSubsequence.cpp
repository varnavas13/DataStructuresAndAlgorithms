#include <bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int>& arr)
{

    int n = arr.size();
    vector<int> ans;

    ans.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        auto it = std::lower_bound(ans.begin(), ans.end(), arr[i]);
        if (it == ans.end()) {
            ans.push_back(arr[i]);
        } else {
            *it = arr[i];
        }
    }

   
    return ans.size();
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<lengthOfLIS(arr);
    return 0;
}