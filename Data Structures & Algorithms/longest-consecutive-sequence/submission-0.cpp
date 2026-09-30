class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setNums;

        for(auto num:nums)
        {
            setNums.insert(num);
        }

        vector<vector<int>> res;
        int i=0;
        for(auto num:nums)
        {   
            if(setNums.count(num-1))continue; 
            res.push_back(vector<int>{});  // ✅ create a new row
            res[i].push_back(num);
            int j=1;
            while(setNums.count(num+j))
            {
                res[i].push_back(num+j);
                j++;
            }

            i++;

        }


        int longest =0;
        for(auto r:res)
        {
            if(longest <(int)r.size())
            {
                longest =r.size();
            }
        }

        return longest ;
    }
};
