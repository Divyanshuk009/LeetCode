class Solution {
public:
    int fio(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        int mid = s + (e - s) / 2;

        while (s <= e) {
            if (nums[mid] == target) {

                e = mid - 1;
                ans = mid;
            }

            else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

    int lao(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        int mid = s + (e - s) / 2;

        while (s <= e) {
            if (nums[mid] == target) {

                s = mid + 1;
                ans = mid;
            }

            else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }



vector<int>
searchRange(vector<int>& nums, int target) {

    int first = fio(nums, target);
    int last = lao(nums, target);

    return {first, last};
}
}
;