class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len=0;
int l=0;
unordered_map<char,int> mp;
for(int i=0;i<s.size();i++){
if(mp.find(s[i])!=mp.end())
l=max(l,mp[s[i]]+1);
mp[s[i]]=i;
len=max(len,i-l+1);
}
return len;
        
    }
};