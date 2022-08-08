class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n=nums.size();
        int c=0;
        int can;
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                can=nums[i];
            }
            if(can==nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return can;
    }
};