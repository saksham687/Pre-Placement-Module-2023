class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end = row*col-1;
        int mid = start + (end-start)/2;
        
        while(start<=end) {
               
            int ele = matrix[mid/col][mid%col];          
            
            if(target == ele) {
                return true;
            } 
            else if(target > ele) {
                start = ++mid;
            } 
            else {
                end = --mid;
            }
            mid = start + (end-start)/2;
        }
        
        return false;
    }
};