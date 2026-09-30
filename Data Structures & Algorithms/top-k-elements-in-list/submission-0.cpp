class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        for(const auto& num:nums)
        {
            freq[num]++;
        }

        vector<pair<int,int>> result;
        for(auto fr:freq)
        {
            result.push_back({fr.second,fr.first});
        }

        sort(result.rbegin(),result.rend());

        vector<int> res;

        for(int i=0;i<k;i++)
        {
            res.push_back(result[i].second);

        }

        return res;

    }
};
