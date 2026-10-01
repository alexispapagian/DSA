class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=0;

        while(right<nums.size())
        {   
            nums[left]=nums[right];
            while(right<nums.size() && nums[left]==nums[right])
            {
                right++;
            }
            left++;

        }

        return left;


    }
};