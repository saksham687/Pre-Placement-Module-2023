class Solution {
    public int climbStairs(int n) {
        int temp=0;
        int curr=1;
        int pre=1;
        
        for(int i=1;i<n;i++)
        {
            temp=curr;
            curr=curr+pre;
            pre=temp;
        }
        return curr;
    }
}