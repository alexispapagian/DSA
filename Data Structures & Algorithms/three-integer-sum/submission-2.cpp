class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        
        for(int i=0; i<nums.size(); i++) {  // Add i++
            if(nums[i]>0) break;

            if(i > 0 && nums[i]==nums[i-1]) continue;  // Add i > 0 check
            
            int l=i+1;
            int r=nums.size()-1;

            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum>0) {
                    r--;
                }
                else if(sum<0) {
                    l++;
                }
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        } 
        return res;
    }
};