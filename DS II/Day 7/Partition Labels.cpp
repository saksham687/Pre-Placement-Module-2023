class Solution {
public:
    vector<int> partitionLabels(string s) {
         unordered_map< char,int > mpp;
        vector< int > res;
        for(int i=0;s[i];i++) 
			mpp[s[i]]=i;     //storing the index of last occurence of each character
        int i=0;
        while(s[i]){
            int j=mpp[s[i]];
            int k=i+1;
			while(k < j){
				if(mpp[s[k]] > j)
					j=mpp[s[k]];
				k++;
			}
            res.push_back(j-i+1);
            i=j+1;
        }
        return res;
    }
};