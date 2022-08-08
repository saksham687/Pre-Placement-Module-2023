class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        return vec;
        
    }
};