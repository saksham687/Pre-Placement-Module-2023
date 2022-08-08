class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> um;
        int ans = 0;
        for(auto& c: s) {
            um[c]++;
        }
        
        for(auto& i : um){
            if(i.second % 2 == 0)
                ans += i.second;
            else 
                ans += i.second - 1;
        }
        
        return (s.size() != ans) ? ans + 1 : ans;
    }
};