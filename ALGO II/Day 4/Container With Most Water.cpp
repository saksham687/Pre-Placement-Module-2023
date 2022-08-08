class Solution {
public:
    int maxArea(vector<int>& height) {
          int n = height.size(),l = 0, r = n-1;
        int maxvol = 0;
        while(l<r)
        {
            maxvol = max(maxvol,(r-l)*min(height[l],height[r]));
            if(height[l]>height[r])
                r--;
            else
                l++;
        }
        return maxvol;
    }
};