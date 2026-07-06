class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int comp = 0;
        int indx1 = -1;
        int indx2 = -1;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j]==target) {
                    indx1 = i;
                    indx2 = j;
                    break;
                }
            }
        }
        return {indx1, indx2};
    }
};