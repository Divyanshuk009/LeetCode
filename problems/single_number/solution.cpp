class Solution {
public:
void sort(vector<int>&nums,int length){
    if(length<=0){
        return;
    }
      for(int i=0;i<length-1;i++){
        if(nums[i]>nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
      }
      sort(nums,length-1);
}
    int singleNumber(vector<int>& nums) {
        sort(nums,nums.size());
        int ans;
        int curr;
        if(nums.size()==1){
            return nums[0];
        }
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]!=nums[j]){
        //             int ans=nums[i];
        //         }
        //     }
        // }

         for(int i=0;i<nums.size()-1;i+=2){
        if(nums[i]!=nums[i+1]){
            ans = nums[i];
            return ans;
            // curr=nums[i+1];
        }
        // if(curr!=nums[i+1]){
        //     ans=nums[i+1];
        // }
      }
        return ans;
    }
};