class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int p=0;
        
        int i=0;
        int j=0;
        int q=INT_MIN;
        while(i<nums1.size())
        {
            j=0;
            while(j<nums2.size())
            {
                if(nums1[i]==nums2[j])
            {
            arr.push_back(nums1[i]);
             nums1[i]=q;
            nums2[j]=q;
            break;
            }
            else 
              j++;
            }
                
          i++;      
        }
            
            return arr;
    }
};