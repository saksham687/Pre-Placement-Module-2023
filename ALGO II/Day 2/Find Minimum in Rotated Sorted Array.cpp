class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l = 0, h = nums.size()-1, mid;
        while (l < h)
        {
            mid = l+(h-l)/2;
            if (nums[l] < nums[h]) return nums[l];
            else if (nums[mid] > nums[h]) l = mid+1;
            else h = mid;
        }
        return nums[l];
    }
};