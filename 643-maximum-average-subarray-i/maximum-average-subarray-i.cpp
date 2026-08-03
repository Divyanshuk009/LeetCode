class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowstate = 0;
        double result = 0;

        for (int i = 0; i < k; i++) {
            windowstate += nums[i];
        }
        result = windowstate;

        for (int i = k; i < nums.size(); i++) {
            windowstate += nums[i];
            windowstate -= nums[i - k];
            result = max(result, windowstate);
        }
        return result/k;
    }
};