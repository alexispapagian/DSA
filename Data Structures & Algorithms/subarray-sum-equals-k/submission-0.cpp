class Solution {
   public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int currentSum = 0;
        unordered_map<int, int> prefixSums;

        prefixSums[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            int diff = currentSum -k;
            res+=prefixSums[diff];
            prefixSums[currentSum]++;

        }

        return res;
    }
};