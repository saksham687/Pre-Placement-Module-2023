// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    long long int start,end,mid;
        long int ans=1;
        start=1;
        end=n;
        while(start<=end){
            mid=start+(end-start)/2;
            bool x=isBadVersion(mid);
            if(x==true){
              ans= mid;
                end=mid-1;
                
            }else{
                start=mid+1;
            }
        }
        
     return ans;   
    }
};