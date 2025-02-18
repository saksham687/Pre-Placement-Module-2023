class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i++)
        {  if(i>0)
            if(nums[i]==nums[i-1])
                continue;
            int left=i+1;
            int right=len-1;
         while(left<right)
         {
             int sum=nums[i]+nums[left]+nums[right];
             if(sum==0)
             {
                 ans.push_back({nums[i],nums[left],nums[right]});
                 left++;
                 right--;
                 while(left<right&&nums[right]==nums[right+1]) right--;
while(left<right&&nums[left]==nums[left-1]) left++;
             }
             else
                 if(sum<0)
                     left++;
             else
                 right--;
         }
        }
        return ans;
    }
};