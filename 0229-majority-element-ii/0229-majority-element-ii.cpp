class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int n=nums.size();
        nums.clear();
        for(auto &p : m)
        {
            if(p.second>(n/3))
                nums.push_back(p.first);
        }
        return nums;
    }
};