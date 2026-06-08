class Solution {
public:
    bool isAnagram(string s, string t) {
        int m1[26]={0};
        // int m2[26]={0};
        if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            m1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            m1[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(m1[i]!=0) return false;
        }
        return true;
    }
};