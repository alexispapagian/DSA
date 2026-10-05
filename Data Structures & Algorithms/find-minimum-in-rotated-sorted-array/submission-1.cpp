class Solution {
   public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int minimum = nums[left];
        while (left <= right) {
            if (nums[left]<nums[right])
            {
                minimum = min(minimum,nums[left]);
                break;
            }


            int middle = (left + right) / 2 ;
            minimum = min(minimum,nums[middle]);
            if (nums[middle] >= nums[left]) {
                left = middle + 1 ;
                
            }
            else if (nums[middle]< nums[right]){
                right = middle -1 ;
                
            }
            
    }
    return minimum;
}
}
;
