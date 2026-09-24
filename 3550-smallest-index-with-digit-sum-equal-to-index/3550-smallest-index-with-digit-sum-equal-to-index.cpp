class Solution {
public:
    int d(int a) {
        int b = 0;
        while (a != 0) {
            b = b + a % 10;
            a = a / 10;
        }
        return b;
    }
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (d(nums[i]) == i)
                return i;
        }
        return -1;
    }
};