class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sm=0;
        for(int i=0;i<apple.size();i++)
        sm+=apple[i];
        reverse(capacity.begin(),capacity.end());
        int i=0;
        
        while(sm>0)
        {
            sm-=capacity[i];
            i++;
        }
        return i;
    }
};