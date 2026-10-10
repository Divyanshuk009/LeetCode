class Solution {
public:
    int majorityElement(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
        int n =nums.size();
        int ans = nums[n/2];
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna