class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> hash1(26,0) , hash2(26,0);
        for(char c: magazine){
            hash1[c-'a']++;
        }
        
          for(char c: ransomNote){
            hash2[c-'a']++;
        }
        
        for(char c: ransomNote){
            if(hash2[c-'a']!=hash1[c-'a'] and hash2[c-'a']>hash1[c-'a'] ) return false;
        }
        return true;

    }
};