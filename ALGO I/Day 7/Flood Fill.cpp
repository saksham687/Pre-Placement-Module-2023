class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<int> dir={0,-1,0,1,0};
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int n=image.size(), m=image[0].size(), initColor=image[sr][sc];
        if(initColor==color)
            return image;
        while(q.size()){
            auto [i,j]=q.front();
            q.pop();
            image[i][j]=color; 
            for(int d=0; d<4; d++){
                int ni=i+dir[d], nj=j+dir[d+1];
                if(ni<0 || nj<0 ||ni>=n || nj>=m || image[ni][nj]!=initColor)
                    continue;
                q.push({ni, nj});
            }
        }
        return image;
    }
};