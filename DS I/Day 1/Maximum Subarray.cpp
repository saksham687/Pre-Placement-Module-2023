class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int maxSub = nums[0];
    int currSub = 0;
    
    for(int i=0;i<nums.size();i++){
        if(currSub<0){
            currSub = 0;
        }
        currSub+=nums[i];
        maxSub = max(maxSub,currSub);
    }
    
    return maxSub;
    }
};