class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        vector<int> temp(n);
        for(int k=0;k<n;k++)
        {
            if(nums[k]>0)
            {
                temp[i]=nums[k];
                i=i+2;
            }
            if(nums[k]<0)
            {
                temp[j]=nums[k];
                j=j+2;
            }
        }
        return temp;
    }
};