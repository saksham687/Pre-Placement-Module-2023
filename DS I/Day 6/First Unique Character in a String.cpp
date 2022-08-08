class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int arr[256] = {};
        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            arr[s[i]]++;
            if(arr[s[i]] == 1){
                q.push({i,s[i]-'a'});
            }
            while(!q.empty() && arr[q.front().second+'a'] != 1){
                q.pop();
            }
        }
        if(q.empty()){
           return -1; 
        }
        return q.front().first;
    }
};