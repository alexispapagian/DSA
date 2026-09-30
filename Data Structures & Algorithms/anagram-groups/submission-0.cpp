class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        unordered_map<string,vector<string>> subLists;
        for(auto str:strs){
            string sortedString=str;
            sort(sortedString.begin(),sortedString.end());
            subLists[sortedString].push_back(str);
        }

        vector<vector<string>> result;
        for(auto& subList:subLists)
        {
            result.push_back(subList.second);
        }

        return result;

    }
};
