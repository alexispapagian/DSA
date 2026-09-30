class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countMax = 0;
        int countConsecutive = 0;
        for (auto num : nums) {
            if (num > 0) {
                countConsecutive += 1;
                if (countConsecutive > countMax)

                {
                    countMax = countConsecutive;
                }
            }
            else{
            countConsecutive = 0;}
        }
        return countMax;
    }
};