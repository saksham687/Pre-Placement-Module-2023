class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int strow=0,endrow=n-1,stcol=0,endcol=n-1;
        int val=1;
         while(strow<=endrow  && stcol<=endcol ){
             //first row
             for(int i= stcol; i<=endcol; ans[strow][i++]=val++);
             strow++;
             
             // last column
             for(int i=strow; i<=endrow; ans[i++][endcol]=val++);
             endcol--;
             
             //lastrow
             for(int i=endcol; i>=stcol; ans[endrow][i--]=val++);
             endrow--;
             
             //first column
             for(int i= endrow; i>=strow; ans[i--][stcol]=val++);
             stcol++;
         }
        return ans;
    }
};