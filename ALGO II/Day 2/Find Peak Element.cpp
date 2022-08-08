class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());  
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==max)
                return i;
        }
        return -1;
    }
};