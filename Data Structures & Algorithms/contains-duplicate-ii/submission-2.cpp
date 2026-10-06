class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> count;

        int left =0;

        for(int right=0;right<nums.size();right++)
        {
            if(right-left>k)
            {
                count.erase(nums[left]);
                left++;
            }
            
            
            if(count.find(nums[right])!=count.end())
            {
                return true;
            }
            else{
                count.insert(nums[right]);
            }

        }
        return false;

        
    }
};