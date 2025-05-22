class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_map<int,bool>mp2;
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]++;
        }
        bool found=false;
        vector<int>ans;
        for(int i=0;i<nums.size();++i)
        {
            if(mp[nums[i]]>nums.size()/3)
            {
                if(!mp2[nums[i]])
                {
                    found=true;
                    mp2[nums[i]]=true;
                    ans.push_back(nums[i]);
                }
            }
        }
        if(!found)
        ans.push_back(-1);
        return ans;
    }
};