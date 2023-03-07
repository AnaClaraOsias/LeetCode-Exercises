class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int> soma(size);
        soma[0]=nums[0];
        for(int i=1;i<size;i++)
            soma[i] = nums[i] + soma[i-1];
        return soma;
    }
};