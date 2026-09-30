class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> subLists;
        for(const auto& str:strs)
        {
            vector<int> count(26,0);
            for(const char& s:str)
            {
                count[s-'a']=count[s-'a']+1;
            }

            string key = to_string(count[0]);

            for(int i=1;i<count.size();i++)
            {
                key+=','+to_string(count[i]);
            }

            subLists[key].push_back(str);
        }
        
        vector<vector<string>> result;
        for(const auto& subList:subLists)
        {
            result.push_back(subList.second);
        }
        
        return result;
    }
};
