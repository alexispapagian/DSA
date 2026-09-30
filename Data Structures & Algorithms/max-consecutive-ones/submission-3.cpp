class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, cnt = 0;

        for (auto num : nums) {
            num > 0 ? cnt += 1:cnt = 0;
            res = max(cnt, res);
        }

        return res;
    }
};