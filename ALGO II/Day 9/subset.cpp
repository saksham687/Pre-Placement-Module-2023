class Solution {
public:
    void subset(vector<int>&nums,vector<int>&temp,vector<vector<int>>&res,int index){
        if(index>=nums.size())
            return;
        for(int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);
            res.push_back(temp);
            subset(nums,temp,res,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int> temp;
        res.push_back(temp);
        subset(nums,temp,res,0);
        return res;
    }
};