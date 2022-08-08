class Solution{
public:
    int max=0;
    int recur(vector<vector<int>>& grid,int i, int j,int count){
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size())
            return count;
        else if(grid[i][j]==0)
            return count;
        else{
            grid[i][j]=0;
            count+=1;
            count=recur(grid,i+1,j,count);
            count=recur(grid,i-1,j,count);
            count=recur(grid,i,j+1,count);
            count=recur(grid,i,j-1,count);
            return count;
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid){
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]!=0){
                    count=recur(grid,i,j,0);
                    if(max<count)
                        max=count;
                }
            }
        }
        return max;
    }
};