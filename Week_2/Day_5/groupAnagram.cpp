class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(string words : strs){
            string key = words;
            sort(key.begin(),key.end());
            mpp[key].push_back(words);
        }
        vector<vector<string>> ans;
        for (auto it : mpp) 
            ans.push_back(it.second);
        return ans;
    }
};