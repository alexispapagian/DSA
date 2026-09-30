class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> counts={0,0,0};


        for(int i=0; i<nums.size();i++)
        {
            counts[nums[i]]++;
        }

        int index = 0;
        for(int i=0;i<counts.size();i++)
        {
           while(counts[i]-->0)
            {
                nums[index++]= i;

            }

        }


    }
};