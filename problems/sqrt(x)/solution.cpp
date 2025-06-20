class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=-1;

        int mid=s+(e-s)/2;

        while(s<=e){

            long long square = 1LL*mid*mid;
            if(square==x){
                ans=mid;
                return mid;

            }

            else if(square<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }mid=s+(e-s)/2;
        }
        return ans;
    }
};