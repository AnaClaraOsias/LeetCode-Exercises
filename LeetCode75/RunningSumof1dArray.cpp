class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int> sum(size);
        sum[0]=nums[0];
        for(int i=1;i<size;i++)
            sum[i] = nums[i] + sum[i-1];
        return sum;
    }
};