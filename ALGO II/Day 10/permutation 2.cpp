class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        dfs(nums, ans, 0);
        return ans;
    }
    void dfs(vector<int>& nums, vector<vector<int>>& ans, int start) {
        if (start == size(nums)) {
            ans.push_back(nums);
            return;
        }
        for (int i = start; i < size(nums); i++) {
            if (find(begin(nums)+start, begin(nums)+i, nums[i]) != begin(nums)+i) continue;
            swap(nums[start], nums[i]);
            dfs(nums, ans, start+1);
            swap(nums[start], nums[i]);
        }
    }
};