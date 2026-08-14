class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int &num: nums){
            mp[num]++;
        }
        vector<pair<int, int>>pr;
        for(auto &[key, value]: mp){
            pr.push_back({value,key});
        }
        sort(pr.rbegin(), pr.rend());

        vector<int>ans;
        for(int i = 0; i < k; i++){
            ans.push_back(pr[i].second);
        }
        return ans;

    }
};
