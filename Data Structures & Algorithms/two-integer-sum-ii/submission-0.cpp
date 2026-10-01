class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> result;
        int left = 0, right = numbers.size()-1;

        while(left<right)
        {   int currentSum = numbers[left]+numbers[right];
            if(currentSum>target)right--;
            if(currentSum<target)left++;
            if(currentSum==target)
            {result.push_back(left+1);
            result.push_back(right+1);
            return result;}
        }

        return {};

    }
};
