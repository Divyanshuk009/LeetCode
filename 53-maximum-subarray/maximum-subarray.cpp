class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxsum = nums[0];
        int currentSum=nums[0];
        for (int i = 1; i < nums.size(); i++) {
          currentSum = max(nums[i],currentSum+nums[i]);
          Maxsum=max(currentSum,Maxsum);
        }
        return Maxsum;
    }
};