class Solution {
public:
    int findMin(vector<int> &nums) {
        int  l = 0;
        int r  = nums.size() - 1;

        if(nums[0] < nums[r]) return nums[0]; 

        while( l < r){
            int mid = (l+r)/2;

            if(nums[mid] >= nums[r] && nums[mid] >= nums[l]){
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        return nums[r];
    }
};
