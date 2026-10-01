class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=0,size=nums.size();


        while(right<size){
           int count=1;

            while(right+1<nums.size() && nums[right]==nums[right+1])
            {
                count++;
                right++;
            }

            for(int i=0;i<min(2,count);i++)
            {
                nums[left]=nums[right];
                left++;
            }

            right++;

        }

        return left;

    }
};