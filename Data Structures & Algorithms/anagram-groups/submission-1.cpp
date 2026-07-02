class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>mp;
        for(auto str : strs){
            vector<int>v(26, 0);
            for(char ch : str){
                v[ch-'a']++;
            }
            string s = "";
            for(int i = 0; i < 26; i++){
                if(v[i] > 0){
                    while(v[i] != 0){
                        s += i+'a';
                        v[i]--;
                    }
                }
            }
            mp[s].push_back(str);
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};