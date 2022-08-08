class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result(numRows);
        result[0]={1};
        if(numRows==1)return result;
        result[1]={1,1};
        int x;
        for(int i=2;i<numRows;i++){
            result[i].push_back(1);
            for(int j=0;j<result[i-1].size()-1;j++){
                x=result[i-1][j]+result[i-1][j+1];
                result[i].push_back(x);
            }
            result[i].push_back(1);
        }
        return result;
    }
};