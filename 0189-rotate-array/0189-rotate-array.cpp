class Solution {
public:
    void reverse(vector<int>&nums,int a,int b)
    {
        while(a<b)
        {
            swap(nums[a],nums[b]);
            a++,b--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};